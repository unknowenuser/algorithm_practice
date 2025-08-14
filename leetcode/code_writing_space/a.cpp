#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        for (size_t i = 0; i < prices.size(); i++)
        {
            for (size_t j = i + 1; j < prices.size(); j++)
            {
                if (prices[j] - prices[i] > max)
                {
                    max = prices[j] - prices[i];
                }
            }
        }
        if (max < 0)
        {
            return 0;
        }
        return max;
    }
};

int main()
{
    Solution a;
    vector<int> n1 = {9,10,13,7,6,25,5,1,3,6,7,8,9};
    int k = a.maxProfit(n1);
    cout << k << "\n";
    for (auto i : n1)
    {
        cout << " " << i;
    }
    return 0;
}