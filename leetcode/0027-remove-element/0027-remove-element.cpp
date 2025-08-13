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