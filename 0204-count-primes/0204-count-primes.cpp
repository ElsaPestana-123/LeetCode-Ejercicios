class Solution {
public:
    int countPrimes(int n){

        vector<bool>nums(n,true);
        if(n > 0) nums[0] = false;
        if(n > 1) nums[1] = false;
        int count = 0;

        for(long long i = 2; i < n; i++){
            if(nums[i] == true){
                for(long long j = i * i; j < n; j += i){
                    nums[j] = false;
                     
                }
                count++;
            }

        }
        return count;
    }
};