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