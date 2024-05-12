// Soal nomor 6
// Kira-kira berapa nih outputnya?
// Jawaban: 180
#include <iostream>

int IhProBanget(int z)
{
    return z + z;
}

int Dribble(int y)
{
    return IhProBanget(y / 2) + IhProBanget(y / 2) + IhProBanget(y / 2);
}

int Bagas(int x)
{
    return Dribble(x / 3) + Dribble(x / 3) + Dribble(x / 3);
}

int main()
{
    int apaNih = Bagas(60);

    std::cout << apaNih << '\n';

    return 0;
}