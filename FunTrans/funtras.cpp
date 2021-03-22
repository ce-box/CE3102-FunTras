#include "funtras.hpp"

// Calcula el factorial de n -> (n)!
long long funtras::fact(int n){
    if (n == 0)
        return 1;
    return n* funtras::fact(n-1);
}

// Calcula el valor inicial de x_o para div_t
double funtras::div_xo(double a){
    double x_o = 0;

    if (fact(80) < a < fact(100))
        x_o = funtras::power_t(15, funtras::eps);
    else if (fact(60) < a < fact(80))
        x_o = funtras::power_t(11, funtras::eps);
    else if (fact(40) < a < fact(60))
        x_o = funtras::power_t(8, funtras::eps);
    else if (fact(20) < a < fact(40))
        x_o = funtras::power_t(4, funtras::eps);
    else if (fact(0) < a < fact(20))
        x_o = funtras::power_t(2, funtras::eps);

    return x_o;
}

// Aproxima el valor de la division de 1 entre x
double funtras::div_t(double x){

    int sign = (x > 0)? 1:-1;
    double a = abs(x);
    x = funtras::div_xo(a); // Obtener el valor inicial
    double x_sgt = x * (2 - a*x); // Calcular el valor siguiente
    int k = 1;

    while (abs((x_sgt - x)/x_sgt) > tolerancia || k < max_iteraciones){
        double tmp = x_sgt;
        x_sgt = x * (2 - a*x); 
        x = x_sgt;
        k++;
    }

    return sign * x_sgt;
}

// Retorna el valor de la base elevado a la potencia de x.
double funtras::power_t(double x, double a){
    double result = 1;

    while (x > 0){
        result *= a;
        x--;
    }
    return result;
}
