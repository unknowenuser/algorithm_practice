#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        bool twice = false;
        size_t index = 0;
        for (size_t i = 1; i < nums.size(); i++)
        {
            if (twice == false && nums[index] == nums[i])
            {
                twice = true;
                nums[index++] = nums[i];
                nums[index] = nums[i];
                continue;
            }
            if (nums[i] != nums[index])
            {
                nums[++index] = nums[i];
                twice = false;
            }
        }
        return (int)(index + 1);
    }
};

int main()
{
    Solution a;
    vector<int> n1 = {0,0,0,1,2,3,3,3,4,5,6,6,7,7,7,8,9,10,10};
    int k = a.removeDuplicates(n1);
    cout << "k: " << k << "\n" << "nums:";
    for (auto i : n1)
    {
        cout << " " << i;
    }
    return 0;
}