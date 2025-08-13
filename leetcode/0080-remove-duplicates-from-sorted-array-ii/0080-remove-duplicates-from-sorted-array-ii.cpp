class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        size_t index = 0,twice_checker = 0;
        for (size_t i = 1; i < nums.size(); i++)
        {
            if (nums[index] != nums[i])
            {
                if (nums[twice_checker] == nums[twice_checker + 1])
                {
                    nums[++index] = nums[i - 1];
                }
                nums[++index] = nums[i];
                twice_checker = i;
            }
        }
        if (nums.size() - 1 > twice_checker)
        {
            nums[++index] = nums[twice_checker];
        }
        return (int)(index + 1);
    }
};