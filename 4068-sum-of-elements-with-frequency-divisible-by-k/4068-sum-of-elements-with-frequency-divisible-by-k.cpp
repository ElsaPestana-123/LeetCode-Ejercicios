class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int,int>frecuencia;

        for(int num : nums){
            frecuencia[num]++;
        }

        long long suma=0;

        for(const auto& [num,fren] : frecuencia){
            if(fren % k == 0){
                suma += num * fren;
            }
        }

        return suma;
        
    }
};