#include <iostream>

using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main()
{
    int a = 5;

    cout << "address a " << &a << endl;
    cout << "  nilai a " << a << endl;

    // Fungsi dengan dengan input pointer
    // fungsi(&a);

    // Kasus membuat fungsi kuadrat
    // a = kuadrat(a);

    // Dengan pointer
    kuadrat(&a);
    cout << "  nilai a " << a << endl;

    cin.get();
    return 0;
}

void fungsi(int *b)
{
    cout << "address b " << b << endl;
    cout << "  nilai b " << *b << endl;
}

// Dengan pointer
void kuadrat(int *valPtr)
{
    *valPtr = (*valPtr) * (*valPtr);
}

// Cara biasanya
// int kuadrat(int value){
//     return value*value
// }

// Cmiiw : di pointer itu address a tidak sama dengan address b. b itu menyimpan alamatnya a, jadi kala kita cout << b, keluarnya bakalan alamatnya a. Tapi kalo cout << &b, itu keluarnya baru alamatnya si b sendiri. kalo di reference baru, alamat a dan b bakalan sama