#include <iostream>
#include <algorithm>
#include <vector>

class Dot{
public:
    double x,y,slope;
    Dot()=default;
    Dot(double a,double b): x(a),y(b),slope(y/x) {}
    void setx(double a)
    {
        x = a;
        slope = y/x;
    }
    void sety(double a)
    {
        y = a;
        slope = y/x;
    }
};

bool sorter(Dot a,Dot b)
{
    return a.slope > b.slope;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    size_t dots_num;
    double x,y;
    std::cin >> dots_num;
    std::vector<Dot> arr;
    double x_min = 1,y_min = 1;
    for (size_t i = 0; i < dots_num; i++)
    {
        std::cin >> x >> y;
        if (x < x_min)
        {
            x_min = x;
        }
        if (y < y_min)
        {
            y_min = y;
        }
        arr.emplace_back(x,y);
    }
    if (x_min <= 0)
    {
        for (size_t i = 0; i < dots_num; i++)
        {
            arr[i].setx(arr[i].x + (-1*x_min) + 1);
        }
    }
    if (y_min <= 0)
    {
        for (size_t i = 0; i < dots_num; i++)
        {
            arr[i].sety(arr[i].y + (-1*y_min) + 1);
        }
    }
    std::sort(arr.begin(),arr.end(),sorter);
    for (size_t i = 0; i < dots_num; i++)
    {
        std::cout << arr[i].slope << "\n";
    }
    
    return 0;
}