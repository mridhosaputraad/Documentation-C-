#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "otong";
    hasil2 = "ucup";

    a = 5;

    cout << "Masukkan Angka? ";
    cin >> b;

    output = (a < b) ? hasil1 : hasil2;

    /*
    //Sama saja dengan atau ekuivalensi
    // 
    // if (a < b)
    // {
    //     output = hasil1;
    // }
    // else
    // {
    //     output = hasil2;
    // }
    */

    cout << output << endl;

    return 0;
}

/*
//Ternary Operator = ?
//kondisi ? hasil1 : hasil2
// 
//Berfungsi untuk ngecek kondisi kita itu benar atau tidak
*/