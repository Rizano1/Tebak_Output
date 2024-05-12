// Soal nomor 1 
// Ikut MAGE X gak nih?
// Jawaban: "Ayo Ikut MAGE X!"
// Note: Mungkin jawabannya bisa diganti dengan jawaban lain (misalnya dengan slogan Mage X) jika sekiranya tidak cocok
#include <iostream>
#include <string>

void SiapIkutMAGEXGakNih(std::string s)
{
    if(s == "Siap dong")
    {
        // Kalau begitu,
        std::cout << "Ayo Ikut MAGE X!" << '\n'; 
    }
    else
    {
        // Jangan menyerah, karena kesuksesan selalu dimulai dengan langkah kecil. Oleh karena itu,
        std::cout << "Ayo Ikut MAGE X!" << '\n'; 
    }
}

int main()
{
    SiapIkutMAGEXGakNih("Siap dong");

    return 0;
}