#include <iostream>

using namespace std;

// Ini disebut reporter: Karena mengembalikan nilai
int kuadrat(int x)
{
    int y;
    y = x * x;
    return y;
}

// ini disebut worker: karena hanya menjalankan saja tanpa memberikan feedback
void tampilkan(int input)
{
    cout << "menampilkan dengan void\n";
    cout << input << endl;
}

int main(int argc, char const *argv[])
{
    int input, hasil, a, b, hasil2;
    cout << "nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);

    cin.get();
    return 0;
}

// void adalah tipe data kosong
// void tidak membutuhkan keyword return karena tidak mengembalikan apapun