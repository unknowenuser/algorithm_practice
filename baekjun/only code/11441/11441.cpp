#include <iostream>
#include <stdio.h>


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int n,temp,start,end;
    std::cin >> n;
    int* nums = new int [n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        nums[i] = temp;
    }
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> start;
        std::cin >> end;
        int sum = 0;
        for (int j = start - 1; j < end; j++)
        {
            sum += nums[j];
        }
        std::cout << sum << "\n";
    }
    return 0;
}