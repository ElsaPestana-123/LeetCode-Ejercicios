class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num : nums) freq[num]++;
        
        vector<int> uniqueNums;
        for(auto& [num, count] : freq) {
            uniqueNums.push_back(num);
        }
        
        sort(uniqueNums.begin(), uniqueNums.end());
        
        int result = 0;
        int last = INT_MIN;
        
        for(int num : uniqueNums) {
            int count = freq[num];
            int start = max(num - k, last + 1);
            int end = num + k;
            
            int available = min(count, end - start + 1);
            if(available > 0) {
                result += available;
                last = start + available - 1;
            }
        }
        
        return result;
    }
};
