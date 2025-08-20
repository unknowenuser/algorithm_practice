class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int max_index = static_cast<int>(nums.size() - 1);
        if (max_index == 0)
        {
            return true;
        }
        if (nums[0] == 0)
        {
            return false;
        }
        
        if (nums[max_index] == 0)
        {
            int i = max_index - 1;
            while (i >= 0)
            {
                if (max_index - i <= nums[i])
                {
                    max_index = i;
                    break;
                }
                --i;
            }
            if (i < 0)
            {
                return false;
            }
            
        }
        for (int i = max_index; i >= 0; i--)
        {
            if (nums[i] < 1) // == (nums[i] == 0)
            {
                int j = i - 1;
                for (; j >= 0; j--)
                {
                    if (i - j < nums[j])
                    {
                        i = j;
                        break;
                    }
                }
                if (j < 0)
                {
                    return false;
                }
            }
        }
        return true;
    }
};