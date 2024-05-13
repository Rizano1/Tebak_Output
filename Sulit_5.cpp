// Soal nomor 5
// McLaren lu warna apa bos?
// Jawaban: "Hitam"
#include <iostream>
#include <string>

int main()
{
    std::string listWarna[10] =
    {
        "Hitam", "Coklat", "Merah", "Jingga" , "Kuning",
        "Hijau", "Biru"  , "Ungu" , "Abu-abu", "Putih"
    };

    int warna = 1010101010;
    while(warna - 10 >= 0)
    {
        warna = warna - 10;
    }

    std::cout << "McLaren ku warna " << listWarna[warna] << ". McLaren lu warna apa bos?" << '\n';

    return 0;
}