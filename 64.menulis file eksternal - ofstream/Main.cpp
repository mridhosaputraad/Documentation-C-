#include <iostream>
#include <fstream> //ofstream, ifstream, fstream

using namespace std;

int main()
{
    ofstream myFile;

    // ios::out =default, operasi output;
    // ios::app = menuliskan pada akhir baris;
    // // ios::trunc = default, membuat file jika tidak ada, dan  \kalau ada akan di hapus

    int a = 12345;
    myFile.open("data1.txt");
    myFile << "menuliskan baris baru pada data\n";
    myFile << a;
    myFile.close();

    return 0;
}

/*
Di memori kan ada stack sama heap. Bedanya apa?

Stack itu alokasi memory yang bertumpuk bro, misal kita deklarasi variable yang kedua kalinya itu ditaro setelah deklrasi memori yang kedua. Nah jadinya first in first out. Contoh aplikasinya kalo kita bikin alokasi memory di dalam fungsi, dia akan ditaro setelah alokasi sebelumnya. Dan stack itu fiks besarnya. Makanya kalo bikin array diantara dua alokasi mamory kita gak bisa memperbesar jumlah array. Ini untuk C++ ya. Kalo heap itu alokasi memorynya bisa berubah besarnya. Jadi istilahnya stack itu tumpukan yang tersusun, kalo heap itu barang berserakan atau random alokasinya. Heap biasanya dipakai kalau kita bikin object, contoh yang paling gampang adalah string di c++ alokasinya dia heap, karena kita bisa memperbesar string dari waktu ke waktu.

*/