#include <iostream>
#include <string>

using namespace std;

template <typename T>
void print(T data)
{
    cout << data << endl;
}

template <typename T>
int toInt(T data)
{
    return int(data);
}

template <typename T, typename U>
T max(T a, U b)
{
    return (a > b) ? a : b;
}

int main()
{
    print(5);
    print(5.5);
    print('c');

    cout << toInt(50.854647) << endl;
    cout << max(10, 13.56) << endl;

    print<double>(10.12);
    cout << max<double, int>(11.1, 12);

    return 0;
}