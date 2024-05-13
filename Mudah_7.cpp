// Nomor 7
// Output: "McLaren lu warna apa bos?"
#include <iostream>

int main()
{
    int uang = 100000;
    int mcLaren = 90000;
    int kopi = 80000;

    if(uang >= mcLaren)
    {
        uang = uang - mcLaren;
        std::cout << "McLaren lu warna apa bos?" << '\n';
    }

    if(uang >= kopi)
    {
        uang = uang - kopi;
        std::cout << "Kopi 80rb nih bos" << '\n';
    }

    return 0;
}