#include <iostream>
#include <string>

using namespace std;

int main()
{
    string kata("cat");

    // menampilkan data string
    cout << kata << endl;

    // mengambil karakter berdasarkan index
    cout << "index ke 1 : " << kata[1] << endl;

    // mengubah karakter pada index
    kata[1] = 'e';
    cout << kata << endl;

    // menyambung, concatenation
    string kata2(kata + "ar"); /* ini operasinya langsung ke pembuatan kata */
    cout << kata2 << endl;

    string kata3(" membahana");
    kata2.append(kata3); /* ini operasinya nempel ke kata-nya */
    cout << kata2 << endl;

    string kata4("ahay");
    kata2 += " " + kata4;
    cout << kata2 << endl;

    return 0;
}