#include <iostream>

using namespace std;

int main()
{

    // membuat array
    int nilai[5];
    nilai[0] = 5;
    nilai[1] = 1;
    nilai[2] = 9;
    nilai[3] = 3;
    nilai[4] = 4;

    cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;

    // Untuk mengakses nilainya dengan mengambil dari address tapi relatif terhadap 0
    int *ptr = nilai;
    *(ptr + 2) = 6;

    // memanipulasi
    nilai[3] = 7;

    cout << endl;
    cout << &nilai[0] << " nilainya adalah: " << nilai[0] << endl;
    cout << &nilai[1] << " nilainya adalah: " << nilai[1] << endl;
    cout << &nilai[2] << " nilainya adalah: " << nilai[2] << endl;
    cout << &nilai[3] << " nilainya adalah: " << nilai[3] << endl;
    cout << &nilai[4] << " nilainya adalah: " << nilai[4] << endl;
    cout << endl;

    // mengambil ukuran dari si array
    cout << "ukuran array = " << sizeof(nilai) << " byte" << endl;

    // Mengambil jumlah member dari si array
    cout << "jumlah member array = " << sizeof(nilai) / sizeof(int) << endl;

    cin.get();
    return 0;
}

// cmiiw : array di c++ tidak memiliki fungsi internal untuk melihat ukuran banyaknya member