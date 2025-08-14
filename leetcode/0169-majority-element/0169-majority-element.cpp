class Solution {
public:
    int majorityElement(vector<int>& nums) {
        size_t n = nums.size();
        if (n < 3)
        {
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        return nums[((nums.size()/2) + 1)];
    }
};