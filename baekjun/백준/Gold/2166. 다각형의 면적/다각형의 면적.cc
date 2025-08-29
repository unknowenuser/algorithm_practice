#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cout << std::fixed;
    std::cout.precision(1);
    size_t n;
    std::pair<double,double> a,b,first;
    double sums[2];
    std::cin >> n;
    std::cin >> b.first >> b.second;
    first = b;
    for (size_t i = 0; i < n - 1; i++)
    {
        a = move(b);
        std::cin >> b.first >> b.second;
        sums[0] += (a.first * b.second);
        sums[1] += (a.second * b.first);
    }
    sums[0] += (b.first * first.second);
    sums[1] += (b.second * first.first);
    std::cout << std::abs((sums[0]-sums[1])/2);
    return 0;
}