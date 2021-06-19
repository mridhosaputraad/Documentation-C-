#include <iostream>

using namespace std;

int main()
{
    cout << "Loop\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }

    cout << "Loop\n";

    int total = 0;
    for (int i = 1; i <= 10; i++)
    {
        total += i;
        cout << i << " || " << total << endl;
    }

    return 0;
}