#include <iostream>
// Ini Kepala
int main(/* argumen */)
// Ini body
{
    // ini statement
    std::cout << "halo kawan-kawan sekalian\n";
    std::cout << "ini adalah baris baru.";
    std::cout << "ini bukan baris baru.";
    std::cout << "\nini akhir kalimat" << std::endl;
    std::cin.get();
    return 0;
}

/* Catatan

> std   -> standar library dari <iostream> artinya mengambil fungsi dari <iostream> karena cpp gtau std::out untuk menampilkan data ke console.

> ::    -> artinya dia akan mengambil member function yang ada di dalam std

> cot   -> artinya console out

> <<    -> namanya operator insertion yang isinya tipe data dan akan di masukkan ke cout

> endl  -> berasal dari <iostream>, endline artinya akhir dari baris

> cin   -> console input

> get();-> method mengambil data dari input

> return 0; -> ini adalah exit flag artinya tidak ada statement yang error. Kalau saat program selesai dengan nilai int pada depan main() mereturn nilai nol, berarti program selesai dengan berhasil. Kalau nilai returnnya tidak sampai, maka program tidak mencapai titik akhir. Kenapa ada titik akhir, karena dimulai dengan main, sehingga nilai return 0 untuk memastikan kalau programnya selesai mencapai exit flag di int = 0;

> ;     -> delimeter artinya untuk mengakhiri statement

cmiw: yang diakhiri ; adalah statement
*/