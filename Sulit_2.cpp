// Soal nomor 2
// Sekarang MAGE ke berapa ya kira-kira?
// Jawaban: "MAGE X"
#include <iostream>

int main()
{
    int tahun = 2024;
    for(int i = 10, j = tahun; i < j; i++)
    {
        tahun -= 1;
    }

    if(tahun == 8)
    {
        std::cout << "MAGE XIII" << '\n';
    }
    else if(tahun == 9)
    {
        std::cout << "MAGE IX" << '\n';
    }
    else if(tahun == 10)
    {
        std::cout << "MAGE X" << '\n';
    }

    return 0;
}