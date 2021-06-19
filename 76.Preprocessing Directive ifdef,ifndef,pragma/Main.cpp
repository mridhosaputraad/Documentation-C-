#include <iostream>
#include "bersama.h"
#include "foo.h"
#include "bar.h"

// #define FOO
// ifdef
// #ifdef FOO
// #define TEST_FOO "foo ada"
// #else
// #define TEST_FOO "foo tidak ada"
// #endif

// // ifndef
// #ifndef FOO
// #define FOO "Membuat foo"
// #endif

using namespace std;

int main()
{
    Mahasiswa mahasiswa;
    mahasiswa.NIM = 10;
    cout << mahasiswa.NIM << endl;
    return 0;
}
