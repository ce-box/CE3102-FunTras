/* ---------------------------------------------------------------------------
 * file: funtras.hpp
 * autores: Esteban Alvarado, Martín Calderón, Olman Castro, Agustín Venegas
 * 
 * @brief Biblioteca estatica que permite aproximar el valor numerico de
 *        un conjunto de funciones trascendentes de variable real utili-
 *        zando unicamente las operaciones básicas: suma(+), resta(-) y
 *        multiplicacion(*).
 * 
 * @version 1.0
 * ---------------------------------------------------------------------------*/

#ifndef H_FUNTRAS
#define H_FUNTRAS

// Bibliotecas
#include <iostream>
#include <math.h>


class funtras {

    private:
        static const int max_iteraciones = 2500;
        static constexpr double tolerancia = 10e-8;
        static constexpr double eps = 2.2204e-16;

        /**
         * @brief Calcula el factorial de un numero positivo n.
         * @param n Numero entero positivo.
         * @return Valor de (n)!
         */ 
        static long double fact(int n);

        /**
         * @brief Determina el valor inicial de x_o para la división div_t.
         * @param a Valor de la base.
         * @return Valor de x_o correspondiente al valor de a.
         */
        static double div_xo(double a);
    
    public:

        /**
         * @brief Realiza la division de 1/x.
         * @param x Valor del dividendo.
         * @return El cociente de la division.
         */ 
        static long double div_t(double x);

        /**
         * @brief Retorna la base elevada a la potencia del exponente.
         * @param x Valor del exponente.
         * @param a Valor de la base.
         * @return El resultado de realizar a^x.
         */ 
        static long double power_t(double x, double a);

        /**
         * @brief Calcula la aproximacion del seno hiperbolico de la variable.
         * @param x Valor de la variable.
         * @return El resultado de seno hiperbolico de x.
         */
        static double sinh_t(double x);

        /**
         * @brief Realiza la aproximacion seno de una variable.
         * @param x Valor de la variable.
         * @return El resultado de sen(x).
         */
        static double sin_t(double x);

        /**
         * @brief Realiza la aproximacion del coseno hiperbolico de una variable.
         * @param x Valor de la variable.
         * @return El resultado del coseno hiperbolico de x.
         */
        static double cosh_t(double x);

        /**
         * @brief Realiza la aproximaciondel coseno  de una variable.
         * @param x Valor de la variable.
         * @return El resultado del cos(x).
         */
        static double cos_t(double x);

        /**
         * @brief Realiza la aproximacion de euler elevado en una variable.
         * @param x Valor de la variable.
         * @return El resultado de e^x.
         */
        static double exp_t(double x);

        /**
         * @brief Realiza la aproximacion de logaritmo natural de una variable.
         * @param x Valor de la variable.
         * @return El resultado de ln(x)
         */
        static double ln_t(double x);

        /**
         * @brief Realiza la aproximacion de tangente de una variable.
         * @param x Valor de la variable.
         * @return El resultado de tan(x)
         */
        static double tan_t(double x);

        /**
         * @brief Realiza la aproximacion de tangente hiperbolico de una variable.
         * @param x Valor de la variable.
         * @return El resultado de tangente hiperbolico de x
         */
        static double tanh_t(double x);

        /**
         * @brief Realiza la aproximacion de arcoseno de una variable.
         * @param x Valor de la variable.
         * @return El resultado de acos(x).
         */
        static double asin_t(double x);

        /**
         * @brief Realiza la aproximacion de arcotangente de una variable.
         * @param x Valor de la variable.
         * @return El resultado de atan(x).
         */
        static double atan_t(double x);

        /**
         * @brief Realiza la aproximacion de raiz cuadrada de una variable.
         * @param x Valor de la variable.
         * @return El resultado de raiz cuadrada de x.
         */
        static double sqrt_t(double x);

        /**
         * @brief Realiza la aproximacion de una raiz con indice a de la variable x.
         * @param x Valor de la variable.
         * @param a Valor del indice de la raiz.
         * @returnEl resultado de raiz con indice a de x.
         */
        static double root_t(double x, double a);

        /**
         * @brief Realiza la aproximacion de logaritmo de base a para la variable x.
         * @param x Valor de la variable.
         * @param a Valor de la base del logaritmo.
         * @return resultado del logaritmo base a, de la variable x.
         */
        static double log_t(double x, double a);
};

#endif // H_FUNTRAS
