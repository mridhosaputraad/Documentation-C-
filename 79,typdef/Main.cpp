#include <iostream>

using namespace std;

int main()
{

    // typedef adalah memberikan alisa untuk tipedata

    typedef int i;
    typedef int iVector[2];

    i a = 10;
    iVector b = {1, 2};

    cout << a << endl;
    cout << b[0] << b[2] << endl;

    return 0;
}