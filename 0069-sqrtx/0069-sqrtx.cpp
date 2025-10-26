class Solution {
public:
    double funcion(double x, int num){
        return (x*x) - (double)num;
    }
    double derivada(double x){
        return 2*x;
    }

    int mySqrt(int num) {
        if (num == 0) return 0;

        double raiz = (double)num;
        double tolerancia = 0.0001;

        while(abs(funcion(raiz,num)) > tolerancia){
            double f_value = funcion(raiz,num);
            double d_value = derivada(raiz);

            raiz = raiz - (f_value/d_value);
        }

        return (int)raiz;

        
    }
};