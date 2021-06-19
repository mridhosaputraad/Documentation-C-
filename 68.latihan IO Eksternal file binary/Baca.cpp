#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Mahasiswa
{
    int NIM;
    string nama;
    string jurusan;
};

int main()
{

    ifstream myFile;

    myFile.open("data.bin", ios::binary);

    int buffer_NIM;               //wadah penyerapan data NIM biner bentuk dari file 'data.bin'
    unsigned int buffer_nama1;    //wadah penyerapan data ukuran nama bentukbiner dari file 'data.bin'
    unsigned int buffer_jurusan1; // wadah penyerapan data ukuran jurusan bentuk biner dari file 'data.bin'

    // Penyerapan data NIM dari 'data.bin'
    myFile.read(reinterpret_cast<char *>(&buffer_NIM), sizeof(int));

    // Penyerapan data ukuran nama dan jurusan dari 'data.bin'
    myFile.read(reinterpret_cast<char *>(&buffer_nama1), sizeof(unsigned int));
    myFile.read(reinterpret_cast<char *>(&buffer_jurusan1), sizeof(unsigned int));

    //wadah penyerapan data nama dan jurusan
    string buffer_mhs1_nama, buffer_mhs1_jurusan;

    // pemberian ukuran maksimum untuk wadah penyerapan data nama dan ukuran
    // inilah fungsi dari variabel wadah penyerapan yg tadi
    buffer_mhs1_nama.resize(buffer_nama1);
    buffer_mhs1_jurusan.resize(buffer_jurusan1);

    // Penyerapan data nama dan jurusan dari 'data.bin'
    myFile.read(reinterpret_cast<char *>(&buffer_mhs1_nama[0]), buffer_nama1);
    myFile.read(reinterpret_cast<char *>(&buffer_mhs1_jurusan[0]), buffer_jurusan1);

    myFile.close();

    cout << buffer_NIM << endl;
    cout << buffer_mhs1_nama << endl;
    cout << buffer_mhs1_jurusan << endl;

    return 0;
}