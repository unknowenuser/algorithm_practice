#include <iostream>
#include <cstring>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    char string[501];
    std::cin.getline(string, 501);
    while (strcmp(string, "END") != 0)
    {
        size_t index = std::strlen(string);
        for (size_t i = index; i > 0; i--)
        {
            std::cout << string[i - 1];
        }
        std::cout << '\n';
        std::cin.getline(string, 501);
    }
    
    return 0;
}