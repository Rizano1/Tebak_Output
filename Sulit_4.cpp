// Soal nomor 4
// Kira-kira jodoh atau enggak nih? xixixi
// Jawaban: ""
#include <iostream>
#include <string>

int main()
{
    bool jodoh;
    bool akuSayangKamu    = true;
    bool kamuSayangAku    = false;
    bool kitaSukaBakso    = true;
    bool kitaSukaKalkulus = true;
    bool memangJodoh      = true;

    if(akuSayangKamu && kamuSayangAku)
    {
        jodoh = true;
    }
    else
    {
        if(kitaSukaBakso)
        {
            if(kitaSukaKalkulus)
            {
                jodoh = true;
            }
            else
            {
                jodoh = false;
            }
        }
        else
        {
            jodoh = false;
        }
    }

    if(jodoh)
    {
        std::cout << "Jodoh dong" << '\n';
    }
    else
    {
        std::cout << "Sepertinya kita tidak ditakdirkan untuk bersama :(" << '\n';
    }

    return 0;
}