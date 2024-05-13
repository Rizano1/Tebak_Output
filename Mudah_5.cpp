// Nomor 5
// Output: "Pedro Pedro Pedro Pedro Pe"
#include <iostream>

int main()
{
    for(int i = 1; i <= 5; i++)
    {
        if(i % 5 == 0)
        {
            std::cout << "Pe" << '\n';
        }
        else
        {
            std::cout << "Pedro ";
        }
    }

    return 0;
}