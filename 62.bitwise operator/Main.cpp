#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void printBinary(unsigned short val, string nama)
{
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main()
{
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "\n>> - Bitwise SHR" << endl;
    c = a >> 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c=" << c << endl;

    cout << "\n<< - Bitwise SHL" << endl;
    c = a << 2;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c=" << c << endl;

    cout << "\n~ - Bitwise NOT" << endl;
    c = ~a;
    printBinary(a, "a");
    printBinary(c, "c");
    cout << "c=" << c << endl;

    cout << "\n^ - Bitwise XOR" << endl;
    c = a ^ b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c=" << c << endl;

    cout << "\n| - Bitwise OR" << endl;
    c = a | b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c=" << c << endl;

    cout << "\n& - Bitwise AND" << endl;
    c = a & b;
    printBinary(a, "a");
    printBinary(b, "b");
    printBinary(c, "c");
    cout << "c=" << c << endl;

    return 0;
}

// Berguna ketika belajar micro controller
// Manfaatnya untuk memanipulasi bitnya bukan angka
// Dengan ini kita bisa men-swap nilai dari variabel tanpa bantuan temporary variabel

/*
// Bitwise Operator
// 
// $    AND Bitwise AND
// |    OR  Bitwise inclusive OR
// ^    XOR Bitwise exclusive OR
// ~    NOT
// <<   SHL Shift bits left
// >>   SHR shift bits right

cmiiw

-> biner itu basis 2 (bilangannya hanya terdiri dari 0 sama 1)

Tapi saya ada beberapa pertanyaan nih
1. Kok saya konversi string ke bitset nggak bisa ya?
2. Cara mengetahui tipe data / cara konversi yang diterapkan bitset itu gimana bang?. Misalnya cara membedakan char dengan int atau float dari binernya
3. Bagaimana jika yang dikonversi adalah bilangan berkoma atau bilangan negatif? Membedakan positif negatifnya dimana bang?

Jawaban

1. konversi data ke bitset harus diketahui panjang data nya, nah kalau string kan gak jelas panjang datanya bisa macem-macem. Tapi, kalau panjang diketahui, bisa dilakukan dengan pendekatan dari konversi char ke bitset. karena string kan bukan tipe data fundamental.

2. bitset pada dasarnya adalah sekuens dari n-bits kan?...jadi tipe datanya kita gak tau apa, karena toh dia kan bit...jadi tetep aja kudu tau dia itu tipenya apa saat proses konversi. kalau maksudnya adalah baca file biner atau bitset tanpa tau dia tipe data apa, akan susah karena bitset bukan digunakan buat itu.

3. sekali lagi, representasi bitset adalah n-bits saja. jadi kalau mau tau dia adalah double atau float atau bahkan char gak akan bisa...toh informasi yang kita punya hanya panjang bits dari bitsetnya kan?...jadi ya harus tau dulu dia itu bitset dari tipe data apa. kalau mau tau bilangan berkoma atau tidak dari bitset, clue yang ada cuma panjang data dan itu sulit. 

cluenya sih bisa aja pakai constructornya bitset.

*/