class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if (n == 0) return;

        
        for (int i = 0; i < n; i++){
            nums1[m+i] = nums2[i];
        }

        int size = m + n;

        for (int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i - 1; j++){
                if (nums1[j] > nums1[j +1]){
                    swap(nums1[j], nums1[j+1]);
                }
            }
        }

        
    }
};