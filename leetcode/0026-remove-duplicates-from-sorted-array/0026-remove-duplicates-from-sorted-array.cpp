class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t index = 0;
        for (size_t i = 1; i < nums.size(); i++)
        {
            if (nums[index] != nums[i])
            {
                nums[++index] = nums[i];
            }
        }
        return index + 1;
    }
};