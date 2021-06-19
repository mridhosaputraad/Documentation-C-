#include <iostream>
#include <string>

using namespace std;

struct buah
{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main()
{

    buah apel;

    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 50000;
    apel.rasa = "manis";

    cout << " apel " << endl;
    cout << apel.warna << endl;
    cout << apel.berat << endl;
    cout << apel.harga << endl;
    cout << apel.rasa << endl;

    cin.get();
    return 0;
}

/*
//Struct adalah sebuah data yang dibentuk oleh beberapa data
*/