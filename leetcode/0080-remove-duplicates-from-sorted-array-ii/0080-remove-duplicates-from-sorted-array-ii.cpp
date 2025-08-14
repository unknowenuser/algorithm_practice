class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    size_t j = 0;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (i == 0 || i == 1 || nums[j - 2] != nums[i])
            {
                nums[j++] = nums[i];
            }
        }
        return int(j);
    }
};