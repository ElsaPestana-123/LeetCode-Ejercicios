class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {

        for(int a = 0; a <= nums.size()- 2*k; a++){
            bool creciente1 = true;
            bool creciente2 = true;
            for(int j = a; j < a+k-1; j++){
                if(nums[j] >= nums[j+1]){
                    creciente1= false;
                    break;
                   
                }
             
            }

            for(int j = a+k; j < a+2*k-1; j++){
                if(nums[j] >= nums[j+1]){
                    creciente2= false;
                    break;
                   
                }

            }

            if(creciente1 && creciente2) return true;
        }

        return false;
 
    }
};