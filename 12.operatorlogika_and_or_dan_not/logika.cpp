#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;

    bool hasil, hasil1;

    // operator logika : not, and, or

    // not
    hasil = !(a == 3);
    cout << hasil << endl;

    // and : keuda nilai benar untuk menghasilkan true
    cout << "untuk and \n";
    hasil1 = (a == 3) and (b == 2);
    cout << hasil1 << endl;
    hasil1 = (a == 4) and (b == 2);
    cout << hasil1 << endl;
    hasil1 = (a == 3) && (b == 3);
    cout << hasil1 << endl;
    hasil1 = (a == 4) && (b == 3);
    cout << hasil1 << endl;

    // or : salah satu nilai true maka hasil true
    cout << "untuk or \n";
    hasil1 = (a == 3) or (b == 2);
    cout << hasil1 << endl;
    hasil1 = (a == 4) or (b == 2);
    cout << hasil1 << endl;
    hasil1 = (a == 3) || (b == 3);
    cout << hasil1 << endl;
    hasil1 = (a == 4) || (b == 3);
    cout << hasil1 << endl;

    cin.get();
    return 0;
}

// Ini berguna misalnya membuat perhitungan logika