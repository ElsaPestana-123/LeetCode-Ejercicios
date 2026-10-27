class Solution {
public:
    bool recursiva(string s, string t, int index1, int index2, vector<vector<int>> &memoria){

        if(index1 == s.size()){
            return true;
        }

        if(index2 == t.size()){
            return false;
        }

        if(memoria[index1][index2] != -1){
            return memoria[index1][index2];
        }

        if(s[index1] == t[index2]){
            memoria[index1][index2] = recursiva(s,t,index1+1,index2+1, memoria);
        } else{
            memoria[index1][index2] = recursiva(s,t,index1, index2+1, memoria);
        }

        return memoria[index1][index2];

    }

    bool isSubsequence(string s, string t) {
        vector<vector<int>> memoria(s.size()+1, vector<int>(t.size() + 1, -1));

        return recursiva(s,t,0,0,memoria);
        
    }
};