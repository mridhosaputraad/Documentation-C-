#include <iostream>
// cpp adalah #include yang merupakan preprocessing directive
// #include akan mengambil file dari <iostream> yang selanjutnya akan di masukkan ke tahap preprocessing
// Selanjutnya di compile menjadi obj file(isinya adalah bahasa mesin)
// kumpulan dari obj file akan disatukan kemudian masuk ke proses linking menjadi .exe

int tambah(int a, int b);

// Ini adalah Entry Point
int main()
{
    std::cout << tambah(2, 3) << std::endl;
    // diambil sebuah fungsi yang namanya console out yang isinya "hello world!"
    std::cin.get();
    // fungsinya untuk menutup ketika kita mengetikan sembarang sesuatu
    return 0;
}

/* Catatan:

> Proses compiling
    Untuk mengcompile menjadi executable melewati beberapa proses.
        Ilustrasi:
            cpp -> preprocessing -> compile -> linking

> $ g++ -E test.cpp > test.p (preprocessing)
    perintah untuk memasukan iclude ke preprocessing menghasilkan file .p


> $ g++ -c test.cpp (compiling)
    perintah untuk menghasikan obj file
    proses ini akan error ketika preprocessingny tidak lengkap (contoh <iostream>(header) tidak ada) karena dia tidak tahun std::cout itu apa. Saat cpp sudah di preprocessing, ternyata tidak ada <iostream> nya

    > $ objdump -d test.o
        untuk melihat isi file test.o
        
        cmiw -d itu adalah disassembly

> (Linking)
    > $ g++ test.cpp / > $ g++ test.o
        menghasilkan file .exe

        > ./a
            menampilkan input di terminal

    > $ g++ test.o tambah.o
        melinking/menyambungkan 2/lebih file .o

        // $ g++ test.o tambah.o -o output
            untuk memberi nama file .exe
*/