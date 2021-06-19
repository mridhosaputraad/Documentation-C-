#include <iostream>

using namespace std;

int main()
{
    int a = 5;

    // Pointer
    int *aPtr = &a;

    // Null pointer : mendeklarasikan sebuah pointer tapi dia isinya adalah address kosong
    // int *aPtr = nullptr;
    // aPtr = &a;

    // int a mempunyai nilai dan address (alamat)
    cout << " nilai dari a: " << a << endl;
    cout << "alamat dari a: " << aPtr << endl;

    // deferencing: mengambil data dari sebuah pointer
    a = 10;
    cout << "mengambil nilai dari pointer aPtr : " << aPtr << endl;

    cin.get();
    return 0;
}

// cmiiw : pointer akan selalu bertipe data integer

// cmiiw : buat c++ alamat pointer yang dipake itu physical address dari memory yang ada di RAM komputer kita. Kalau di bahasa yang pakai interpreter kayanya pake virtual address(fiks) yang nyambungin ke physical address.
// Jadi alamat variabel di c++ pasti berubah-ubah, soalnya pengalamatannya sharing bareng proses aplikasi lain di komputer kita.
// Kalo membersihkan memory, sebenarnya setelah aplikasi beres memory langsung dibersihin otomatis. Kalau kita mau ngebersihin memory bisa keyword delete atau pakai smart pointer