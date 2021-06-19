#include <iostream>

using namespace std;

// prototipe
int faktorial(int n);

int main()
{
    int angka, hasil;

    cout << "Menghitung faktorial dari : ";
    cin >> angka;

    hasil = faktorial(angka);
    cout << "\nnilai faktorialnya adalah : " << hasil << endl;

    cin.get();
    return 0;
}

int faktorial(int n)
{
    if (n <= 1)
    {
        cout << n;
        return n;
    }
    else
    {
        cout << n << "x";
        return n * faktorial(n - 1);
    }
}

// cmiiww  : nilai return dari perhitungan fungsinya akan tersimpan di fungsi itu sendiri nanti pada saat fungsinya dipanggil maka nilai returnya akan ditampilkan