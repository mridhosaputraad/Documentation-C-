// Contra flow break dan continue
#include <iostream>

using namespace std;

int main()
{
    // for
    for (int i = 0; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
            // break
        }
        cout << i << endl;
    }

    cout << "akhirnya" << endl;

    // While
    int a = 0;
    // Karena a <= 10, jika a bernilai 10, ia tetap mengeksekusi statement yang ada dibawahnya termasuk statement a++, sehingga a bernilai 11 tetap tercetak di layar
    while (a <= 10)
    {
        // a++;
        // if (a == 5)
        // {
        //     continue; // hati hati infinite loop
        //     // break;
        // }
        cout << a << endl;
        a++; //increament taruh di atas if untuk menghindari infinite loop
    }

    // while

    cin.get();
    return 0;
}