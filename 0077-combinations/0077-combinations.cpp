class Solution {
public:

    void backtrack (int n, int k, int inicio, vector<int> &numsAc, vector<vector<int>> &resultado){

        if(numsAc.size() == k){
            resultado.push_back(numsAc);
            return;
        }

        for(int i = inicio; i <= n; i++){

            numsAc.push_back(i);
            backtrack(n,k,i+1,numsAc, resultado);
            numsAc.pop_back();

        }

    }
    vector<vector<int>> combine(int n, int k) {

        vector<int> numsAc;
        vector<vector<int>> resultado;

        backtrack(n,k,1,numsAc,resultado);

        return resultado;
        
    }
};