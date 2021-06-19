#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "masukkan angka = ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "a = 1" << endl;
        break;

    case 2:
        cout
            << "a = 2" << endl;

    case 3:
        cout << "a = 3" << endl;

    case 4:
        cout << "a = 4" << endl;

    case 5:
        cout << "a = 5" << endl;

    default:
        cout << "default" << endl;
    }

    cout << "akhir dari program" << endl;

    return 0;
}

/* CMIIW

Bagusnya switch untuk mendapatkan nilai dari a bisa bermacam-macam

switch case akan mengeksekusi semua program ketika salah satu kondisinya benar.
mengatasiny gunakan keyboard break (break ini control flow) untuk meloncat ketika salah satu kondisi bernilai true
*/