#include <funtras.hpp>
#include <math.h>

// Calcula el factorial de n -> (n)!
long double funtras::fact(int n){
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
long double funtras::div_t(double x){

    int sign = (x > 0)? 1:-1;
    double a = abs(x);
    x = funtras::div_xo(a); // Obtener el valor inicial
    double x_sgt = x * (2 - a*x); // Calcular el valor siguiente
    int k = 1;

    while (abs(x_sgt - x)/x_sgt > tolerancia && k < max_iteraciones){
        double tmp = x_sgt;
        x_sgt = x * (2 - a*x); 
        x = x_sgt;
        k++;
    }

    return sign * x_sgt;
}


// Retorna el valor de la base elevado a la potencia de x.
long double funtras::power_t(double x, double a){
    long double result = 1;

    while (x > 0){
        result=result*a;
        x--;
    }
    return result;
}


// Aproxima el valor del seno hiperbolico
double funtras::sinh_t(double x){
    int n = 0;
    double current = 0;
    double next = 0;

    while (n < max_iteraciones){
        if (abs(next-current) < tolerancia && n!=0){
            break;
        } else{
            current += (funtras::power_t(2*n+1,x) * funtras::div_t(funtras::fact(2*n+1)));
            n++;
            next = current + (funtras::power_t(2*n+1,x) * funtras::div_t(funtras::fact(2*n+1)));
        }
    }
    return current;
}


// Aproxima el valor de sen(x)
double funtras::sin_t(double x){
    int n = 0;
    double current = 0;
    double next = 0;
    
    while (n < max_iteraciones){
        if(abs(next-current) < tolerancia && n!=0){
            break;
        }else{
            current += (funtras::power_t(n,-1) * (funtras::power_t(2*n+1,x)) * funtras::div_t(funtras::fact(2*n+1)));
            n++;
            next = current + (funtras::power_t(n,-1) * (funtras::power_t(2*n+1,x)) * funtras::div_t(funtras::fact(2*n+1)));
        }
    }
    return current;
}


// Aproxima el valor del coseno hiperbolico
double funtras::cosh_t(double x){

    int n = 0;
    double current = 0;
    double next = 0;
    
    while (n < max_iteraciones){
        if(abs(next-current) < tolerancia && n!=0){
            break;
        }else{
            current += ((funtras::power_t(2*n,x))*funtras::div_t(funtras::fact(2*n)));
            n++;
            next = current + ((funtras::power_t(2*n,x))* funtras::div_t(funtras::fact(2*n)));
        }
    }
    return current;
}

// Calcula un valor aproximado de la funcion cos(x)
double funtras::cos_t(double x){
    int n = 0;
    double current = 0;
    double next = 0;

    while (n < max_iteraciones){
        if(abs(next-current) < tolerancia && n!=0){
            break;
        }else{
            current += (funtras::power_t(n,-1)* (funtras::power_t(2*n,x))* funtras::div_t(funtras::fact(2*n)));
            n++;
            next = current + (funtras::power_t(n,-1)*(funtras::power_t(2*n,x))*funtras::div_t(funtras::fact(2*n)));
        }
    }
    return current;
}



// Retorna la aproximación de la función exponencial e^x
double funtras::exp_t(double x){
    int n = 0;
    double current = 0;
    double next = 0;
    
    while (n < max_iteraciones){
        if (abs(next-current) < tolerancia && n!=0){
            break;
        }else{
            current += ((funtras::power_t(n,x)) * funtras::div_t(funtras::fact(n)));
            n++;
            next = current + ((funtras::power_t(n,x)) * funtras::div_t(funtras::fact(n)));;
        }
    }
    return current;
}


// Aproxima el valor del logaritmo natural -> ln(x)
double funtras::ln_t(double x){
    if (x > 0){
        int n = 0;
        double prefix = (2*(x-1)/(x+1));
        double current = 0;
        double next = 0;

        while (n < max_iteraciones){
            if (abs(prefix*next-prefix*current) < tolerancia && n!=0){
                break;
            }else{
                current += (((1+0.0)/(2*n+1))* funtras::power_t(2*n,((x-1+0.0)* funtras::div_t(x+1))));
                n++;
                next = current + (((1+0.0)/(2*n+1))* funtras::power_t(2*n,((x-1+0.0)* funtras::div_t(x+1))));
            }
        }
        return prefix*current;
    }else{
        throw std::exception();
    }
}


// Calcula una aproxima para tan(x)
double funtras::tan_t(double x){
    return funtras::sin_t(x)*funtras::div_t(funtras::cos_t(x));
}


// Aproxima el valor de tangente hiperbolico
double funtras::tanh_t(double x){
    return funtras::sinh_t(x)*funtras::div_t(funtras::cosh_t(x));
}


// Retorna el valor aproximado de asin(x)
double funtras::asin_t(double x){

    int n = 0;
    double current = 0;
    double next = 0;

    if (x > 1 or x < -1){
        throw std::exception();
    }else{
        while (n < max_iteraciones){
            if(abs(next-current) < tolerancia && n!=0){
                break;
            }else{
                current += ((funtras::fact(2*n)*
                        funtras::div_t(funtras::power_t(n,4)
                        *funtras::power_t(2,funtras::fact(n))*(2*n+1)))*funtras::power_t(2*n+1,x));
                n++;
                next = current + ((funtras::fact(2*n)*funtras::div_t(funtras::power_t(n,4)*
                        funtras::power_t(2,funtras::fact(n))*(2*n+1)))*funtras::power_t(2*n+1,x));
            }
        }
        return current;
    }
}


// Aproxima el valor de atan(x)
double funtras::atan_t(double x){

    int n = 0;
    double current = 0;
    double next = 0;
    if (x > 1 or x < -1){
        throw std::exception();
    }else{
        while (n < 11){
            if(abs(next-current) < tolerancia && n!=0){
                break;
            }else{
                current += (funtras::power_t(n,-1)*(funtras::power_t(2*n+1,x)*funtras::div_t(2*n+1)));
                n++;
                next = current + (funtras::power_t(n,-1)*(funtras::power_t(2*n+1,x)*funtras::div_t(2*n+1)));
            }
        }
        return current;
    }
}

// Aproxima el valor del arcocoseno
double funtras::acos_t(double x){
    return funtras::pi_t()*funtras::div_t(2) - funtras::asin_t(x);
}


// Aproxima el valor de la raiz cuadrada
double funtras::sqrt_t(double x){
    if (x < 0)
        throw std::exception();
    else
        return funtras::exp_t(0.5*funtras::ln_t(x));
}


// Calcula el valor aroximado de la raiz con indice a
double funtras::root_t(double x,double a){
    if(x < 0 or a <= 0)
        throw std::exception();
    else
        return funtras::exp_t((1.0*funtras::div_t(a))*funtras::ln_t(x));
}


// Aproxima el valor para el logaritmo de base a
double funtras::log_t(double x,double a){
    if(x < 0 or a <= 0)
        throw std::exception();
    else
        return funtras::ln_t(x)*funtras::div_t(funtras::ln_t(a));
}


// Aproxima el valor de PI
double funtras::pi_t(){
    double pi = 0;
    double error = funtras::tolerancia + 1;
    int k = 0, den;

    while (error > funtras::tolerancia && k < funtras::max_iteraciones){
        den = (2*k)+1;
        pi += 4*funtras::power_t(k,-1)* funtras::div_t(den);
        error = abs( pi- M_PI );
        k++;
    }

    return pi;
}
