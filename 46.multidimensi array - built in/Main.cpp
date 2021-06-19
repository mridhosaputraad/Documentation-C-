#include <iostream>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom)
{
    int index = 0;
    /*
        kegunaan var index = 0, pada void printArray , kegunaannya apa??

        biar alamatnya bisa dinamis, jadi kan itu ngaksesnya pake pointer *ptrArray, 
        nah index nya dikasih nilai awal sama dengan 0, tapi terus diakhir blok ada index++, 
        jadi fungsinya buat nampilin elemen array dari index 0, 1, 2, 3
    */

    for (int i = 0; i < baris; i++)
    {
        cout << "[ ";
        for (int j = 0; j < kolom; j++)
        {
            cout << *(ptrArray + index) << " ";
            index++;
        }
        cout << "]" << endl;
    }
}

int main()
{
    // array multidimensional
    // array[baris][kolom]
    const int baris = 2;
    const int kolom = 2;
    int arrayMD[baris][kolom] = {1, 2, 3, 4};

    // cout << arrayMD[0][0] << " " << arrayMD[0][1] << endl;
    // cout << arrayMD[1][0] << " " << arrayMD[1][1] << endl;

    printArray(*arrayMD, baris, kolom);

    cin.get();
    return 0;
}