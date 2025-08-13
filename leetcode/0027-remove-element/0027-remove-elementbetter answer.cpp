class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = (int)nums.size();
        int index = k - 1,i = 0;
        while (i <= index)
        {
            if (nums[(size_t)i] == val)
            {
                swap(nums[(size_t)i],nums[(size_t)index--]);
                k--;
                continue;
            }
            i++;
        }
        return k;
    }
};