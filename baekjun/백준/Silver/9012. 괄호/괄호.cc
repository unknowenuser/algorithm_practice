#include <iostream>
#include <string>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    size_t n;
    std::string ps;
    std::cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        std::cin >> ps;
        int temp = 0;
        for (auto &j : ps)
        {
            switch (j)
            {
            case '(':
                ++temp;
                break;
            default:
                --temp;
                break;
            }
            if (temp == -1)
            {
                break;
            }
        }
        switch (temp)
        {
        case 0:
            std::cout << "YES\n";
            break;
        
        default:
            std::cout << "NO\n";
            break;
        }
        
    }
    
    return 0;
}