#include <iostream>
using namespace std;
int main()
{
    int n, j = 1, jumlah = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
    }
}