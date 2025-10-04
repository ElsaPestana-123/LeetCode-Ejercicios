class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> resultante;

        for (int i = 0; i < nums.size(); i++){
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target){
                    resultante.push_back(i);
                    resultante.push_back(j);
                    return resultante;

                }

            }
        }

        return resultante;
        
    }
};