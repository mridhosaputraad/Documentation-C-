#include <iostream>

// Ini adalah Entry Point
int main()
{
    std::cout << "hello world!" << std::endl;
    // diambil sebuah fungsi yang namanya console out yang isinya "hello world!"
    std::cin.get();
    // fungsinya untuk menutup ketika kita mengetikan sembarang sesuatu
    return 0;
}

/* Catatan:

> Include
    Diperintahkan untuk mencopy-paste semua yang ada di <iostream>

> <iostream>
    Berada di satu folder dalam sistem operating windows. Untuk menampilkan ke terminal yang ada di operating sistem kita, karena c++ tidak tahu harus menampilkan hasil input kemana. Sehingga dibuat std librarynya <iostream>

> std
    Adalah standar library yang berasal dari iostream

> endl
    Akhir dari iostreamnya/aliran outputnya
*/