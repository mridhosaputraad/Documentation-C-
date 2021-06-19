#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator \n \n";

    // Ambil Input User
    cout << "Masukkan nilai pertama: ";
    cin >> a;
    cout << "Pilih +,-.*,/: ";
    cin >> aritmatika;
    cout << "Masukkan nilai kedua: ";
    cin >> b;

    cout << "\nHasil Perhitungan: ";
    cout << a << aritmatika << b << endl;

    if (aritmatika == '+')
    {
        hasil = a + b;
        cout << " = " << hasil << endl;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
        cout << " = " << hasil << endl;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
        cout << " = " << hasil << endl;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
        cout << " = " << hasil << endl;
    }

    cin.get();
    return 0;
}