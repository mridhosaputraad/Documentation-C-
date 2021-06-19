#include <iostream>

using namespace std;
// Kasus : buatlah beberapa latihan soal
int main()
{
    int a, b;

    cout << "Selamat datang di kuis Matematika : Muhammad Ridho" << endl;
    cout << "10 x 100 = ";
    cin >> a;

    if (a == 1000)
    {
        cout << "Selamat kamu menjawab soal dengan benar. Soal selanjutnya" << endl;
        cin.get();
    }
    else
    {
        cout << "Jawaban kamu kurang tepat" << endl;
        cin.get();
    }

    cin.get();
    cout << "30 / 3 = ";
    cin >> b;

    if (b == 10)
    {
        cout << "Selamat kamu menjawab soal dengan benar. Soal selanjutnya" << endl;
        cin.get();
    }
    else
    {
        cout << "Jawaban kamu kurang tepat" << endl;
        cin.get();
    }

    cin.get();

    if (a == 1000 && b == 10)
    {
        cout << "Selamat kamu menjawab semua soal dengan benar" << endl;
    }
    else if (a == 1000)
    {
        cout << "Kamu menjawab 1 soal dengan benar" << endl;
    }
    else if (b == 10)
    {
        cout << "kamu mejawab 1 soal dengan benar" << endl;
    }

    cin.get();
    return 0;
}