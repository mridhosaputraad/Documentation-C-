#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    cout << a + (int)b << endl;

    cout << (char)(c + a) << endl;

    return 0;
}

/*
Kalau kita pakai "f" di akhir float, itu artinya pemrosesannya akan dilakukan dengan tipe float, walau kita melakukan pemrosesannya itu double + float.
Tapi jika kita tidak menambahkan f di belakangnya, jadi jika suatu waktu kita inngin melakukan kalkulasi dengan double misalnya
Maka float kita akan diubah ke double, lalu hasilnya akan di convert lagi ke float yang artinya .....
*/