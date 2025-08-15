#include <iostream>
#include <cmath>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,num,difficultys[31] = {0};
    std::cin >> n;
    if (n == 0)
    {
        std::cout << "0";
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        std::cin >> num;
        difficultys[num]++;
    }
    int j = 0,k = 30,del_num = (n*3 + 10)/20;
    for (int i = 0; i < (n*3 + 10)/20; i++)
    {
        while (difficultys[j] == 0)
        {
            j++;
        }
        while (difficultys[k] == 0)
        {
            k--;
        }
        difficultys[j]--;
        difficultys[k]--;
    }
    float deleted_n = (float)(n - del_num*2),sum = 0;
    for (int i = 1; i < 31; i++)
    {
        sum += (float)(difficultys[i] * i);
    }
    std::cout << std::round(sum / deleted_n);
    return 0;
}