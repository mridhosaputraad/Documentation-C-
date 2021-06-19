#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;
struct Mahasiswa
{
    int pk;
    char NIM[11], nama[26], jurusan[26];
};
int getOption();
void checkDatabase(fstream &data);
void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa);
int getDataSize(fstream &data);
Mahasiswa readData(fstream &data, int posisi);
void addDataMahasiswa(fstream &data);
void displayDataMahasiswa(fstream &data);
int main()
{
    fstream data;
    checkDatabase(data);
    int pilihan = getOption();
    char is_continue;
    enum option
    {
        CREATE = 1,
        READ,
        UPDATE,
        DELETE,
        FINISH
    };
    while (pilihan != FINISH)
    {
        switch (pilihan)
        {
        case CREATE:
            cout << "Menambah data mahasiswa" << endl;
            addDataMahasiswa(data);
            break;
        case READ:
            cout << "Tampilkan data mahasiswa" << endl;
            break;
        case UPDATE:
            cout << "Ubah data mahasiswa" << endl;
            break;
        case DELETE:
            cout << "Hapus data mahasiswa" << endl;
            break;
        default:
            cout << "Pilihan tidak ditemukan" << endl;
            break;
        }
    label_continue:
        cout << "Lanjutkan?(y/n) : ";
        cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y'))
        {
            pilihan = getOption();
        }
        else if ((is_continue == 'n') | (is_continue == 'N'))
        {
            break;
        }
        else
        {
            goto label_continue;
        }
    }
    cout << "akhir dari program" << endl;
    cin.get();
    return 0;
}
void displayDataMahasiswa(fstream &data)
{
    int size = getDataSize(data);
    Mahasiswa showMahasiswa;
    cout << "no.\tpk.\tNIM.\tNama.\tJurusan." << endl;
    for (int i = 1; i <= size; i++)
    {
        showMahasiswa = readData(data, i);
        cout << i << "\t";
        cout << showMahasiswa.pk << "\t";
        cout << showMahasiswa.NIM << "\t";
        cout << showMahasiswa.nama << "\t";
        cout << showMahasiswa.jurusan << endl;
    }
}
void addDataMahasiswa(fstream &data)
{
    Mahasiswa inputMahasiswa, lastMahasiswa;
    int size = getDataSize(data);
    cout << "ukuran data : " << size << endl;
    if (size == 0)
    {
        inputMahasiswa.pk = 1;
    }
    else
    {
        lastMahasiswa = readData(data, size);
        cout << "pk " << lastMahasiswa.pk << endl;
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    cout << "Nama: ";
    cin.getline(inputMahasiswa.NIM, 11);
    cout << "Jurusan: ";
    cin.getline(inputMahasiswa.nama, 26);
    cout << "NIM: ";
    cin.getline(inputMahasiswa.jurusan, 26);
    writeData(data, size + 1, inputMahasiswa);
}
Mahasiswa readData(fstream &data, int posisi)
{
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char *>(&readMahasiswa), sizeof(Mahasiswa));
    return readMahasiswa;
}
int getDataSize(fstream &data)
{
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::beg);
    end = data.tellg();
    return (end - start) / sizeof(Mahasiswa);
}
void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa)
{
    data.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char *>(&inputMahasiswa), sizeof(Mahasiswa));
}
void checkDatabase(fstream &data)
{
    data.open("data.bin", ios::out | ios::in | ios::binary);
    if (data.is_open())
    {
        cout << "database ditemukan" << endl;
    }
    else
    {
        cout << "database tidak ditemukan, buat database baru" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}
int getOption()
{
    int input;
    system("cls");
    cout << "\nProgram CRUD data mahasiswa"
            "\n===========================\n"
            "1. Tambah data mahasiswa\n"
            "2. Tampilkan data mahasiswa\n"
            "3. Ubah data mahasiswa\n"
            "4. Hapus data mahasiswa\n"
            "5. Selesai"
            "\n==========================="
         << endl;
    cout << "\npilih (1-5)? : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return input;
}