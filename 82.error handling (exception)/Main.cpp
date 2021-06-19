#include <iostream>
#include <array>
#include <exception>

using namespace std;

// 1. Syntax error
// 2. linking error
// 3. nonerror
// 4. runtime error

int pembagian(int &num, &int &denum)
{
    if (denum == 0)
    {
        // throw overflow_error("Error: pembagi nol");
        throw "Error: Pembagi Nol";
    }
    return num / denum;
}

int main()
{
    int a;
    int b;
    int c;

    whlie(true)
    {
        cout << "num ";
        cin >> a;
        cout << "denum ";
        cin >> b;

        try
        {
            c = pembagian(a, b);
            cout << c << endl;
            // } catch(exception &e){
        }
        catch (const char *e)
        {
            // cout << e.what() << endl;
            cout << e << endl;
        }
    }
    return 0;
}