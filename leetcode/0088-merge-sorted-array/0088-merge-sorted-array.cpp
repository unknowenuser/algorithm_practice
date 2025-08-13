class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1,j = n - 1,k = m + n - 1; //i nums1 j nums2 k nums1+nums2
        while (j >= 0)
        {
            
            if (i >= 0 && nums1[(size_t)i] > nums2[(size_t)j])
            {
                nums1[(size_t)k] = nums1[(size_t)i];
                i--;
            }
            else
            {
                nums1[(size_t)k] = nums2[(size_t)j];
                j--;
            }  
            
        }
    }
        
};