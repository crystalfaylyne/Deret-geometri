#include <iostream>
#include <cmath>

using namespace std;

int main() {

    float batas, a,b, N;

    cout << "==========Deret Geometri===========" << endl;
    cout << "Nilai awal : "; cin >> a;
    cout << "rasio : "; cin >> b;
    cout << "masukkan batas : "; cin >> batas;

    for (int i = 1; i < batas; i++) {

        N = a * pow(b, i - 1);

        if (N < batas) {
            cout << N << " ";
        }

    }
    return 0;
}