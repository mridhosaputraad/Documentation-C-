// preprocessing directive
#include <iostream>

// macro mengubah nilai dengan nama
#define PI 3.14159265359
#define BAHASA "indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X * X)
#define MAX(A, B) ((A > B) ? A : B)

// akhir dari preprocessing directive
using namespace std;

int main()
{
    cout << "nilai PI: " << PI << endl;
    cout << "bahasa: " << BAHASA << endl;
    cout << "kuadrat: " << KUADRAT(5) << endl;
    cout << "kuadrat: " << MAX(5, 4) << endl;

#undef BAHASA
#define BAHASA "Inggris"
    cout << BAHASA << endl;

    cin.get();
    return 0;
}