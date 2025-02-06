class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m,k=0;i<m+n;i++,k++)
        {
            nums1[i]=nums2[k];
        }
        sort(nums1.begin(),nums1.end());
        
    }
};

//TC - O((m+n)log(m+n))
//SC - O(1)

