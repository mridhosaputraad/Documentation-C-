#include <iostream>

using namespace std;

int main()
{
    // Looping untuk array di c++11 keatas
    /*
        for(declarasi variabel : array){
            statement
        }
    */

    int arrayNilai[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int nilai : arrayNilai)
    {
        cout << "address " << &nilai << " nilainya: " << nilai << endl;
        nilai = 1; // ini tidak akan mempengaruhi karena array sifatnya constant
    }

    // Memanipulasi array dengan menggunakan referensi
    cout << endl;
    for (int &nilaiRef : arrayNilai)
    {
        nilaiRef *= 2;
        cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
        // dia akan mengambil address sebenarny dari si array ini
    }

    // Cek nilai di dalam array
    cout << endl;
    for (int &nilaiRef : arrayNilai)
    {
        cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
        // dia akan mengambil address sebenarny dari si array ini
    }

    cin.get();
    return 0;
}