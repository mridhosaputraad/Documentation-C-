#include <iostream>

using namespace std;

// Variabel scope global
int x = 10;

int ambil_global()
{
    return x; // mengambil variabel global
}

int x_local()
{
    // Variabel local scope x_local
    int x = 5;
    return x;
}

int main()
{
    cout << "1. Variabel global : " << x << endl;

    int x = 8;
    cout << "2. Variabel local main : " << x << endl;

    cout << "3. Variabel ambil_global : " << ambil_global << endl;

    {
        // Variabel block scope
        int x = 1;
        cout << "4. variabel local block : " << x << endl;
        cout << "5. variabel global : " << ambil_global << endl;
    }

    cin.get();
    return 0;
}