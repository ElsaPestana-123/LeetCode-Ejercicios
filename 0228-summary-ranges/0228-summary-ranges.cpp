class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        if (nums.empty()) {
            return {}; 
        }

        int start = nums[0];
        vector<string> ranges;

        for(int i = 1; i <= nums.size(); i++){

            if(i == nums.size() || (long)nums[i] != nums[i-1] +1){
                if(start == nums[i-1]){
                    ranges.push_back(to_string(start));
                } else {
                    ranges.push_back(to_string(start) + "->" + to_string(nums[i-1]));
                }

                if(i < nums.size()){
                    start = nums[i];
                }
            }
           
        }

        return ranges;
        
    }
};