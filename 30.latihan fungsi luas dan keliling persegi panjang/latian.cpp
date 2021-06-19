#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int hasil;
    char answer;

    while (true)
    {
        cout << "Apakah anda ingin lempar koin [y/n]: ";
        cin >> answer;

        if (answer == 'y')
        {
            hasil = (rand() % 2) + 1;
            cout << hasil << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}