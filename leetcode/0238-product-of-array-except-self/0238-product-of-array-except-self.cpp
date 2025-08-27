class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int product_all = 1;
        std::vector<int> zeros;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                zeros.push_back(i);
                continue;
            }
            product_all *= nums[i];
        }
        std::vector<int> result;
        if (zeros.size() != 0)
        {
            for (size_t i = 0; i < nums.size(); i++)
            {
                result.push_back(0);
            }
            if (zeros.size() == 1)
            {
                result[zeros[0]] = product_all;
            }
            return result;
        }
        for (size_t i = 0; i < nums.size(); i++)
        {
            result.push_back(product_all / nums[i]);
        }
       return result; 
    }
};