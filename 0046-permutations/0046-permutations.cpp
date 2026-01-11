class Solution {
public:
    void backtrack(vector<int>nums, vector<int>&numsAc,unordered_set<int>& enUso, vector<vector<int>> &resultado){

        if(nums.size() == numsAc.size()){
            resultado.push_back(numsAc);
            return;
        }

        for(int i = 0; i < nums.size(); i++){

            if (enUso.count(nums[i])) continue;

            enUso.insert(nums[i]);
            numsAc.push_back(nums[i]);
            
            backtrack(nums, numsAc,enUso, resultado);

            numsAc.pop_back();
            enUso.erase(nums[i]);
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> resultado;
        vector<int> numsAc;

        unordered_set<int> enUso;

        backtrack(nums, numsAc, enUso, resultado);

        return resultado;

    }
};