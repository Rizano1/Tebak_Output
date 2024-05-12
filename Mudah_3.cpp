// Nomor 3
// Output: "LARIII"
#include <iostream>

int main()
{
    bool punyaSayap = true;
    bool kecoaBisaTerbang;

    if(punyaSayap)
    {
        kecoaBisaTerbang = true;
    }

    if(kecoaBisaTerbang)
    {
        std::cout << "LARIII" << '\n';
    }
    else
    {
        std::cout << "Baygon" << '\n';
    }

    return 0;
}