// Nomor 4
// Output: "Ihhh pro banget ihhh"
#include <iostream>

int main()
{
    bool bagasBisaDribble;

    for(int i = 1; i <= 10; i++)
    {
        if(i % 2 == 0)
        {
            bagasBisaDribble = true;
        }
        else
        {
            bagasBisaDribble = false;
        }
    }

    if(bagasBisaDribble)
    {
        std::cout << "Ihhh pro banget ihhh" << '\n';
    }
    else
    {
        std::cout << "Eh eh sorry" << '\n';
    }

    return 0;
}