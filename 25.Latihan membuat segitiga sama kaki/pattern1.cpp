#include <iostream>
using namespace std;
int main()
{
    int n, jumlah = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n, k = 1; k <= i; k++, j--)
        {
            jumlah += j;
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "jumlah = " << jumlah << endl;
}