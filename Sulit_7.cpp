// Soal nomor 7
// Pedro?
// Jawaban: "Pedro Pedro Pedro Pedro Pe"
#include <iostream>

int main()
{
    std::string rakun = "MAPGMeEGMdAErMAGEoGE MGPEAEeMAGdEGArMAGoEGM MAPGeEdGArMMoAA GEMPEAeGdMErEGMoAG MEPGAeEA";
    
    while(rakun.find('M') != -1)
    {
        rakun.erase(rakun.find('M'), 1);
    }

    while(rakun.find('A') != -1)
    {
        rakun.erase(rakun.find('A'), 1);
    }

    while(rakun.find('G') != -1)
    {
        rakun.erase(rakun.find('G'), 1);
    }

    while(rakun.find('E') != -1)
    {
        rakun.erase(rakun.find('E'), 1);
    }

    std::cout << rakun << '\n';

    return 0;
}