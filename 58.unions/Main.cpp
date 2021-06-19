#include <iostream>
using namespace std;

union nama
{
    int int_value;
    char char_value[4];
};

int main()
{
    nama Variabel;

    Variabel.int_value = 123456789;

    cout << " data int_value; " << Variabel.int_value << endl;
    cout << " data char_value; " << Variabel.char_value << endl;

    Variabel.char_value[0] = 'a';
    Variabel.char_value[1] = 'b';
    Variabel.char_value[2] = 'c';
    Variabel.char_value[3] = 'd';

    cout << " data int_value; " << Variabel.int_value << endl;
    cout << " data char_value; " << Variabel.char_value << endl;

    cin.get();
    return 0;
}

// Union ini membuat beberapa jenis tipe data yang berbeda yang mana memory dalam satu block