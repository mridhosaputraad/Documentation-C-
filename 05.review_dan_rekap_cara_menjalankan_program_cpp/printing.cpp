#include <iostream>

int main()
{
    std::cout << "halo kawan-kawan" << std::endl;
    std::cin.get();
    return 0;
}

// $ g++ printing.cpp -o printing
// $ ./printing
// cmiw : bedanya pake std:: di dalam function dengan di luar function seperti using namespace std;
// kalo pake using namespace std; di header, jadi tidak perlu ketik std:: di setiap line