#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;

    bool hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    // Komparasi, relation expression

    // Sebanding ==
    hasil1 = (a == b);
    cout << hasil1 << endl;

    // Tidak sebanding !=
    hasil2 = (a != b);
    cout << hasil2 << endl;

    // Kurang dari
    hasil3 = (a < b);
    cout << hasil3 << endl;

    // Lebih dari
    hasil4 = (a > b);
    cout << hasil4 << endl;

    // Kurang Dari sama dengan
    hasil5 = (a <= b);
    cout << hasil5 << endl;

    // Lebih dari sama dengan
    hasil6 = (a >= b);
    cout << hasil6 << endl;

    cin.get();
    return 0;
}

/* Catatan Komparasi untuk boolean

Akan berguna ketika mau menggunakan if statement, if for, if while

-> CMIIW
    > = , adalah operator asignment
*/