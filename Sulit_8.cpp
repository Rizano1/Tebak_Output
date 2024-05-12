// Soal nomor 8
// Ping dan Pong
// Jawaban: 16
#include <iostream>

int Ping(int x);

int Pong(int x)
{
    if(x == 0)
    {
        return 1;
    }
    else
    {
        return Ping(x / 2) + Ping(x / 2);
    }
}

int Ping(int x)
{
    if(x == 0)
    {
        return 1;
    }
    else
    {
        return Pong(x / 2) + Pong(x / 2);
    }
}

int main()
{
    int pingPong = Ping(8);

    std::cout << pingPong << '\n';

    return 0;
}