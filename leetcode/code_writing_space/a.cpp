#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

int main()
{
    Solution a;
    vector<int> n1 = {1,2};
    int k = a.maxProfit(n1);
    cout << k << "\n";
    for (auto i : n1)
    {
        cout << " " << i;
    }
    return 0;
}