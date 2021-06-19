#include <iostream>
#include <cstdlib> // mengandung fungsi random
#include <ctime>   // untuk menghindari angka random secara sama terus

using namespace std;

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << 1 + (rand() % 6) << endl;
    // }

    char lanjut;

    while (true)
    {
        cout << "Lempar dadu? (y/n)";
        cin >> lanjut;

        if (lanjut == 'y')
        {
            cout << 1 + (rand() % 6) << endl;
        }
        else if (lanjut == 'n')
        {
            break;
        }
        else
        {
            cout << "Masukan y atau n!\n";
        }
    }
    cin.get();
    return 0;
}