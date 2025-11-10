class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        int index;
        vector<vector<int>>result;
        backtracking(nums,0,sub, result);
        return result;
    }

    void backtracking(vector<int>&nums, int index, vector<int>&sub,vector<vector<int>>&result){
        if(nums.size() == index ){
            result.push_back(sub);
            sort(result.begin(), result.end());
            return;
            
        }
        backtracking(nums, index+1,sub, result);
        sub.push_back(nums[index]);
        backtracking(nums, index+1,sub,result);
        sub.pop_back();
        
    }
};