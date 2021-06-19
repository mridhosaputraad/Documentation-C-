#include <iostream>
using namespace std;
int main()
{
    int n, m;

    cout << "Persegi panjang\n";
    cout << "masukan nilai panjang: ";
    cin >> n;
    cout << "masukkan nilai lebar: ";
    cin >> m;

    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    cout << "luas=" << n * m << endl;
    cin.get();
    return 0;
}