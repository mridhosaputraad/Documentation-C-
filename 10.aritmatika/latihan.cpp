#include <iostream>

using namespace std;

short pertambahan(short var_1, short var_2)
{
    return var_1 + var_2;
}

short pengurangan(short var_1, short var_2)
{
    return var_1 - var_2;
}

short perkalian(short var_1, short var_2)
{
    return var_1 * var_2;
}

float pembagian(short var_1, short var_2)
{
    return var_1 / var_2;
}

short modulus_(short var_1, short var_2)
{
    return var_1 % var_2;
}

int main()
{
    short var_1;
    short var_2;

    cout << "aritmatika" << endl;
    cout << "masukan nilai pertama ";
    cin >> var_1;
    cout << "masukan nilai kedua ";
    cin >> var_2;
    cout << "====berikut hasilnya====" << endl;
    cout << "pertambahan" << endl;
    cout << pertambahan(var_1, var_2) << endl;
    cout << "pengurangan" << endl;
    cout << pengurangan(var_1, var_2) << endl;
    cout << "perkalian" << endl;
    cout << perkalian(var_1, var_2) << endl;

    // Untuk pembagian agar hasilnya decimal,  gunakan salah satu tipe data dari variabelnya adalah float atau double
    cout << "pembagian" << endl;
    cout << pembagian(var_1, var_2) << endl;

    cout << "modulus" << endl;
    cout << modulus_(var_1, var_2) << endl;
}