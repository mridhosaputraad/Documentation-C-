#include <iostream>
#include <cmath>
using namespace std;

/*
Library cmath : reference www.cppreference.com
cos(x)  : cosinus
exp(x)  : eksponen
fabs(x) : nilai absolut dalam float
floor(x)    : pembulatan ke bawah
fmod(x)    : modulus dalam float
log(x)  : logaritma dengan basis natural
pow(x,y)    : logaritma dengan basis 10
sin(x)  : sinus
sqrt(x) : akar kuadrat
tan(x)  : tangen
*/

int main()
{
    int x;

    cout << "Menghitung akar dari x: ";
    cin >> x;

    double y = sqrt(x);
    cout << "akarnya adalah: " << y << endl;

    cin.get();
    return 0;
}