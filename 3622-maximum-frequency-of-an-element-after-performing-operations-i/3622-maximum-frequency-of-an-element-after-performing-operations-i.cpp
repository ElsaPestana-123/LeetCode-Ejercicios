class Solution {
public:
    int maxFrequency(vector<int>& nums, int k, int numOperations) {
        int maxVal = *max_element(begin(nums), end(nums)) +k;

        vector<int> freq(maxVal +1, 0);

        for(int &num : nums){
            freq[num]++;
        }

        for(int i = 1; i <= maxVal; i++){
            freq[i] += freq[i-1];
        }

        int result = 0;

        for(int target = 0; target <= maxVal; target++){
            if(freq[target] == 0) continue;

            int left = max(0, target -k);
            int right = min(maxVal, target +k);

            int total = freq[right] - (left > 0 ? freq[left-1] : 0);
            int Ttarget = freq[target] - (target > 0 ? freq[target-1] : 0);

            int grupo = total - Ttarget;
            int maxFreq = Ttarget + min(grupo, numOperations);
            result = max(result, maxFreq);
        }

        return result;
    }
};