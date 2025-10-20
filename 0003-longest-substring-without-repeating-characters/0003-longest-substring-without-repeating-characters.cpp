class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> unicos;
        int left = 0;
        int maximo = 0;
        
        for(int i = 0; i < s.length(); i++) {
            
            while(unicos.count(s[i])) {
                unicos.erase(s[left]);
                left++;
            } 
            unicos.insert(s[i]);
            
            maximo = max(maximo, i - left + 1);
        }
        
        return maximo;
    }
};
