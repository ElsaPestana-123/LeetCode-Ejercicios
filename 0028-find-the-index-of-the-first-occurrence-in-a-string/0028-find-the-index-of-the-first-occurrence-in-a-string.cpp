class Solution {
public:
    int strStr(string haystack, string needle) {
        const int p = 31;
        const int m = 1e9 + 9;
        
        int S = haystack.size(), T = needle.size();
        if (T > S) return -1;

        vector<long long> p_pow(max(S, T));

        p_pow[0] = 1;
        for(int i = 1; i < (int) p_pow.size(); i++){
            p_pow[i] = (p_pow[i-1] * p) % m;
        }

        vector<long long> h(S + 1, 0);
        for(int i = 0; i < S; i++){
            h[i+1] = (h[i] + (haystack[i] - 'a' + 1) * p_pow[i]) % m;
        }

        long long h_s = 0; 
        for(int i = 0; i < T; i++){
            h_s = (h_s + (needle[i] - 'a' + 1) * p_pow[i]) % m;
        }

        for(int i = 0; i + T <= S; i++){
            long long cur_h = (h[i + T] + m - h[i]) % m;
           
            if(cur_h == (h_s * p_pow[i]) % m) {
                return i; 
            }
        }

        return -1; 
    }
};