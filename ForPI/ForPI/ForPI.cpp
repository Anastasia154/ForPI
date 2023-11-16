#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::cout << "start\n";

    int a = 10;
    int b = 50;

    std::vector<int> v{ 12, 23, 45, 56, 78, 89, 50, 12, 45 };

    for (int x : v)
    {
        if (x > a)
            std::cout << 1;
        if (x < b)
            std::cout << 2;
        if (x > a && x < b)
            std::cout << 3;
        else
            std::cout << std::endl;
        std::cout << std::endl;
    }

    std::cout << "\nfinish";

}

