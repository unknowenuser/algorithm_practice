#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums[i] = 100;
            }
            
        }
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