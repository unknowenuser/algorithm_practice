#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> result = {nums[0]};
        result.reserve(nums.size());
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (result[result.size()-1] != nums[i])
            {
                result.push_back(nums[i]);
            }
        }
        result.shrink_to_fit();
        nums = move(result);
        return (int)nums.size();
    }
};

int main()
{
    Solution a;
    vector<int> n1 = {0,0,1,2,3,3,4,5,6,6,7,7,7,8,9,10,10};
    int k = a.removeDuplicates(n1);
    cout << "k: " << k << "\n" << "nums:";
    for (auto i : n1)
    {
        cout << " " << i;
    }
    return 0;
}