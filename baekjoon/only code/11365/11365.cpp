#include <iostream>
#include <cstring>

int main()
{
    char string[501];
    std::cin.getline(string, 501);
    while (strcmp(string, "END") != 0)
    {
        char *i = &string[std::strlen(string)];
        for (; i != (&string[0]); i--) std::putchar(*i);
        putchar(*i);
        putchar('\n');
        std::cin.getline(string, 501);
    }
    
    return 0;
}