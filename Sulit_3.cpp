// Soal nomor 3
// Kira-kira apa nih pesan rahasia yang dikirim oleh Imroatus? (Petunjuk: Imroatus suka memakai kode ASCII loh)
// Jawaban: "MAGE X JAYA JAYA JAYA"
#include <iostream>
#include <string>

std::string KodeEnkripsiImroatusVersiX(std::string iniKodeRahasia) 
{
    int panjangKodeRahasia = iniKodeRahasia.length();

    for(int i = 0; i < panjangKodeRahasia; i++)
    {
        iniKodeRahasia[i] -= 10;
    }

    return iniKodeRahasia;
}

int main()
{
    std::string pesanRahasia;
    pesanRahasia = KodeEnkripsiImroatusVersiX("WKQO*b*TKcK*TKcK*TKcK");

    std::cout << pesanRahasia << '\n';

    return 0;
}