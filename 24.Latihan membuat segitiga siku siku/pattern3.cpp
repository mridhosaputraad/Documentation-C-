#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i * 2 - 1, k = 1; k <= i; k++, j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}