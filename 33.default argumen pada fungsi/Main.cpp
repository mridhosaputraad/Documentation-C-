#include <iostream>

using namespace std;

// Fungsi prototipe (default argument = nilai standar)
double volume_kubus(double p, double l, double t = 1);

int main()
{
    cout << "volume kubus" << volume_kubus(3, 4) << endl;

    cin.get();
    return 0;
}

double volume_kubus(double p, double l, double t)
{
    return p * l * t;
}