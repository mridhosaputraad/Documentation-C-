#include <iostream>

using namespace std;

int main()
{
    int a = 6;
    int b = 4;

    int hasil;
    // Operatornya +, -, *, /, %

    // Penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // Perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // Pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;
    // Kenapa 6 / 4 = 1 karena variabelnya integer yang tidak punya angka di belakang koma

    // Modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;
    // Modulus adalah komplemen dari pembagian

    // Urutan Eksekusi
    hasil = (a + b) * a;
    cout << hasil << endl;

    cin.get();
    return 0;
}
