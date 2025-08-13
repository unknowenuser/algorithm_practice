class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        vector<int> result = {nums[0]};
        result.reserve(nums.size());
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (result[result.size()-1] != nums[i])
            {
                result.push_back(nums[i]);
            }
        }
        result.shrink_to_fit();
        nums = move(result);
        return (int)nums.size();
    }
};