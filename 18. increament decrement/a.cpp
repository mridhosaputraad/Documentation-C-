#include <iostream>

using namespace std;

int main()
{
    // Increament dan decreament
    // Terdapat dua proses, yakni;
    // Preincrement dan post increament

    int a = 5;
    int b = 5;

    // postincreament, dia akan di print dulu baru di tambah
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    // preincreament , dia akan di tambah dulu baru di print
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    return 0;
}