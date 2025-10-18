#include <iostream>
#include <cstring>

int main()
{
    char string[501];
    std::cin.getline(string, 501);
    while (strcmp(string, "END") != 0)
    {
        for (size_t i = std::strlen(string); i > 0; i--) std::putchar(string[i - 1]);
        putchar('\n');
        std::cin.getline(string, 501);
    }
    
    return 0;
}