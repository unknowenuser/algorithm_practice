#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        
        for (size_t i = 1; i < prices.size(); i++) {
            if (prices[i] > buy) {
                profit += (prices[i] - buy);
            }
            buy = prices[i];
        }
        return profit;
    }
};

int main()
{
    Solution a;
    std::vector<int> n1 = {7,1,5,3,6,4};
    int k = a.maxProfit(n1);
    std::cout << k << "\n";
    for (auto i : n1)
    {
        std::cout << " " << i;
    }
    return 0;
}