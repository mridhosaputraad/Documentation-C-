// bang coba dong bikin array dimana ketika kita ingin melakukan inputan sebanyak 5 maka kita ga perlu bikin cout dan cin sebanyak 5 kali. ckup menggunakan for  lalu di looping

// contoh sederhananya kaya gini....tapi masalahnya alokasi array di C++ harus dijabarkan dengan nilai yang konstan:

// Example program
#include <iostream>
#include <array>

using namespace std;

int main()
{

    // inisialisasi arrat

    const int jumlah_data = 5;

    array<int, jumlah_data> data;

    for (int i = 0; i < jumlah_data; i++)
    {
        cout << "masukan data ke-" << i << ": ";
        cin >> data[i];
    }

    cout << "data array" << endl;

    for (int i = 0; i < jumlah_data; i++)
    {

        cout << data[i] << " ";
    }

    cin.get();
    return 0;
}