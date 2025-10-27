class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxMultiplo=0;
        unordered_set<int>multiplos;
        for(int num:nums){
            if(num % k == 0){
                multiplos.insert(num);
                if(num > maxMultiplo) maxMultiplo = num;
            }
        }

        for(int missed = k; missed <= maxMultiplo + k; missed+=k){
            if(!multiplos.count(missed)) return missed;
        }

        return 0;
        
    }
};