class Solution {
public:
    int jump(std::vector<int>& nums) {
        if (nums.size() == 1)
        {
            return 0;
        }
        int counter = 1;
        for (size_t i = 0; nums.size() > nums[i] + i;)
        {
            size_t max = i;
            for (size_t j = i + 1; j <= nums[i] + i; ++j)
            {
                if (nums[j] + j > nums[max] + max)
                {
                    max = nums[j] + j;
                }
            }
            i = max;
            ++counter;
        }
        return counter;
    }
};