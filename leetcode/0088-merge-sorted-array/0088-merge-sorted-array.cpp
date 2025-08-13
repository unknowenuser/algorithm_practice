class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1,j = n - 1,k = m + n - 1; //i nums1 j nums2 k nums1+nums2
        for (; k >= 0; k--)
        {
            if (j < 0)
            {
                break;
            }
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            
        }
    }
        
};