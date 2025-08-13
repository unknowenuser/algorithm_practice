#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = (int)nums.size();
        size_t index = (size_t)(k - 1);
        for (size_t i = 0; i < index; i++)
        {
            if (nums[i] == val)
            {
                swap(nums[i--],nums[index--]);
                k--;
            }
        }
        return k;
    }
};

int main()
{
    Solution a;
    vector<int> n1 = {1,1,2,3,4,6,7,5,5,1,4};
    int k = a.removeElement(n1,2);
    cout << "k: " << k << "\n" << "nums:";
    for (auto i : n1)
    {
        cout << " " << i;
    }
    return 0;
}