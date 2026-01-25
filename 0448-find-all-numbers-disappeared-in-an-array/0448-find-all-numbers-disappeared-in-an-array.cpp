class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sizeO = nums.size();
        vector<int>missing;
        int count = 1;
        set<int>SR (nums.begin(), nums.end());
        nums.assign(SR.begin(), SR.end());

        for(int i = 0; i < nums.size(); i++){

            if(count == nums[i]){
                count++;
            } else {
                missing.push_back(count);
                count++;
                i--;

            }

        }   

        while (count <= sizeO) {
            missing.push_back(count);
            count++;
        }

        return missing;
        
    }
};