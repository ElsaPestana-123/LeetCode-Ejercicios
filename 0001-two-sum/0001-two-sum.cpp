class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map <int, int> numMap;

        for (int i = 0; i < nums.size(); i++){

          int tengo = nums[i];
          int necesito = target - tengo;

            if (numMap.find(necesito) != numMap.end()){
               return {numMap[necesito], i};
            }

           numMap[tengo] = i;
        }

      return {};  


        /*vector<int> resultante;

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
        */
    }
};