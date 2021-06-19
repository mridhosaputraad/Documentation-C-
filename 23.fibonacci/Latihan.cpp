#include <iostream>

using namespace std;

int main()
{
    int n,
        fn1,
        fn2,
        a,
        b,
        c;

    cout << "Program Deret Fibonacci \n";
    cout << "Masukkan nilai n: ";
    cin >> n;

    cout << "fn1 = ";
    cin >> a;
    cout << "fn2 = ";
    cin >> b;

    c = a + b;
    cout << a << " " << b << " ";
    for (int i = 1; i < n; i++)
    {
        c = a + b;
        b = a;
        a = c;
        cout << c << " ";
    }

    cin.get();
    return 0;
}