class Solution {
public:
   
    string longestCommonPrefix(vector<string>& strs) {
       if (strs.empty()) return "";
       
        string s = strs[0];

        for (size_t i = 1; i < strs.size(); ++i) {
            int j = 0;
           
            while (j < s.size() && j < strs[i].size() && s[j] == strs[i][j]) {
                j++;
            }
            
            s = s.substr(0, j);
            if (s.empty()) break;
        }

        return s;  
    }   
    
};