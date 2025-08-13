#include <iostream>
#include <vector>
using namespace std;


class Solution {

public:

    int removeElement(vector<int>& nums, int val) {

        int k = 0; 

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != val) {

                nums[k++] = nums[i];

            }

        }

        return k; 

    }

};

int main()
{
    Solution a;
    vector<int> n1 = {};
    int k = a.removeElement(n1,0);
    cout << "k: " << k << "\n" << "nums:";
    for (auto i : n1)
    {
        cout << " " << i;
    }
    return 0;
}