class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int comparador = nums.size() / 2;

        unordered_map<int, int> contador;
        for(int num : nums){
            contador[num]++;
        }

        for(auto& [num,repeat] : contador){
            if(repeat > comparador){
                return num;
            }
        }

        return -1;
        
    }
};