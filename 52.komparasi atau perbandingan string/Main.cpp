#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Perbandingan string
    /*
        tanpa menggunakan library

        char kata[4] = {'u','c','u','p'};

        char pembanding[4] = ('u','c','u','p');

        if (kata == pembanding){
            cout << "berhasil" << endl;
        }

        dia tidak akan bisa
    */

    // Dengan library string
    // string kata("ucup");

    // if (kata == "ucup")
    // {
    //     cout << "berhasil" << endl;
    // }

    // program sederhana
    string input;
    string nama_rahasia("ucup");

    while (true)
    {
        cout << "tebak nama : ";
        cin >> input;

        if (input == nama_rahasia)
        {
            cout << "tebakan anda benar" << endl;
            break;
        }
        cout << "tebakan anda salah " << input << endl;
    }

    cout << "program selesai" << endl;

    cin.get();
    return 0;
}