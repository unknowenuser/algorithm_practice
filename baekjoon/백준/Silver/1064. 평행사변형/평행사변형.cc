#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::cout.precision(10);
    std::pair<double,double> a,b,c;
    std::cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    auto isoneline = [&]() -> bool
    {
        if (a.first * (b.second - c.second) + b.first * (c.second - a.second)+ c.first * (a.second - b.second) == 0)
        {
            return true;
        }
        return false;
    };
    if (isoneline())
    {
        std::cout << -1.0;
        return 0;
    }
    std::vector<double> lens(3);
    lens[0] = sqrt(std::pow(a.first-b.first,2) + std::pow(a.second-b.second,2));
    lens[1] = sqrt(std::pow(a.first-c.first,2) + std::pow(a.second-c.second,2));
    lens[2] = sqrt(std::pow(b.first-c.first,2) + std::pow(b.second-c.second,2));
    std::cout << std::max({lens[0],lens[1],lens[2]})*2 - std::min({lens[0],lens[1],lens[2]})*2;
    return 0;
}