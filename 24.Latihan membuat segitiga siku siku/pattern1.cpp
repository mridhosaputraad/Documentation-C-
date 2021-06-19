#include <iostream>

using namespace std;

int main()
{
    int p;
    string x, y, a, b;

    cout << "Masukkan panjang atau lebar dari persegi: ";
    cin >> p;
    cout << "Karakter 1: ";
    cin >> a;
    cout << "Karakter 2: ";
    cin >> b;
    cout << endl;

    for (int i = 0; i < p; ++i)
    {
        if (i % 2 == 0)
        {
            x = a;
            y = b;
        }
        else
        {
            x = b;
            y = a;
        }

        for (int o = 0; o < p; ++o)
        {
            if (o % 2 == 0)
            {
                cout << " " << x;
            }
            else
            {
                cout << " " << y;
            }
        }

        cout << endl;
    }

    return 0;
}