#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    struct Mahasiswa
    {
        int NIM;
        string nama;
        string jurusan;
    };

    ofstream myFile;

    myFile.open("data.bin", ios::binary);

    // Penyediaan wadah untuk ukuran stringnya
    unsigned int ukuran_nama1;
    unsigned int ukuran_jurusan1;

    Mahasiswa mahasiswa1;

    mahasiswa1.NIM = 123;
    mahasiswa1.nama = "ucup";
    ukuran_nama1 = mahasiswa1.nama.size();
    mahasiswa1.jurusan = "memasak";
    ukuran_jurusan1 = mahasiswa1.jurusan.size();

    // Pelemparan data NIM ke file 'data.bin', nanti disana jadi biner.
    myFile.write(reinterpret_cast<char *>(&mahasiswa1.NIM), sizeof(int));

    // Pelemparan data ukuran string nama dan jurusan ke file 'data.bin', nanti disana jadi biner.
    myFile.write(reinterpret_cast<char *>(&ukuran_nama1), sizeof(unsigned int));
    myFile.write(reinterpret_cast<char *>(&ukuran_jurusan1), sizeof(unsigned int));

    // Pelemparan data nama dan jurusan ke file 'data.bin', nanti disana jadi biner.
    myFile.write(reinterpret_cast<char *>(&mahasiswa1.nama[0]), ukuran_nama1);
    myFile.write(reinterpret_cast<char *>(&mahasiswa1.jurusan[0]), ukuran_jurusan1);

    myFile.close();

    return 0;
}