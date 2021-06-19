#include <iostream>

using namespace std;

int main()
{
    // Bilangan Bulat
    unsigned int a = 1; // 32-bit (unsigned untuk memaksimumkan nilainya 2 kali. dan nilai minumnya menjadi 0)
    long b = 6;
    short c = 7;

    // bilangan decimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a'; //  character 1-bit

    // boolean
    bool g = true; // true/false

    cout << a << endl;
    cout << sizeof(a) << "byte" << endl;

    cin.get();
    return 0;
}

/* cmiw

> sizeof    -> untuk mengecek kapasitas memory (byte)
    > 1 byte(memory management) = 8-bit
    > kesimpulannya int -> 32-bit
                        -> didepannya ada +/- -> 31-bit -> 2 pangkat 31 -> 214783648 (tapi harus di awal dengan) -> 214783647 ( ini adalah nilai maksimum integer (nilai minimunya = -214783648))
*/