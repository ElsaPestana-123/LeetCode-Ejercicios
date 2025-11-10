class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set <int> miss(nums.begin(), nums.end());

        vector<int> missing;

        int minRange= *min_element(nums.begin(), nums.end());
        int maxRange= *max_element(nums.begin(), nums.end());

        for(int i = minRange; i<= maxRange; i++){
            if(miss.find(i) == miss.end()){
                missing.push_back(i);
            }
        }

        return missing;
        
    }
};