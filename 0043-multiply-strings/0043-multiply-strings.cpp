class Solution {
public:
    string multiply(string num1, string num2) {

       int n = num1.size();
       int m = num2.size();

       vector<int> res(n+m, 0);

        for(int i = n-1; i >= 0; i--){

            for(int j = m-1; j >= 0; j--){

              int digito1 = num1[i] - '0';
              int digito2 = num2[j] - '0';

              res[i+j+1] += digito1 * digito2;
            }
        }

        for(int k = res.size()-1; k > 0; k--){
            int valorA = res[k];

            res[k] = valorA % 10;
            res[k - 1] += valorA / 10;
        }

        string resultado = "";
        for (int num : res) {
           
            if (!(resultado.empty() && num == 0)) {
                resultado.push_back(num + '0'); 
            }
        }

       return resultado.empty() ? "0" : resultado;

    }
};