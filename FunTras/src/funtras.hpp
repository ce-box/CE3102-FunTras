/* ---------------------------------------------------------------------------
 * file: funtras.hpp
 * autores: Esteban Alvarado, Martín Calderón, Olman Castro, Agustín Venegas
 * 
 * @brief Biblioteca ea que permite aproximar el valor numerico de
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


namespace funtras {

     const int max_iteraciones = 2500;
     constexpr double tolerancia = 10e-8;
     constexpr double eps = 2.2204e-16;

    /**
     * @brief Calcula el factorial de un numero positivo n.
     * @param n Numero entero positivo.
     * @return Valor de (n)!
     */
     long double fact(int n);

    /**
     * @brief Determina el valor inicial de x_o para la división div_t.
     * @param a Valor de la base.
     * @return Valor de x_o correspondiente al valor de a.
     */
     double div_xo(double a);

    /**
     * @brief Realiza la division de 1/x.
     * @param x Valor del dividendo.
     * @return El cociente de la division.
     */
     long double div_t(double x);

    /**
     * @brief Retorna la base elevada a la potencia del exponente.
     * @param x Valor del exponente.
     * @param a Valor de la base.
     * @return El resultado de realizar a^x.
     */
     long double power_t(double x, double a);

    /**
     * @brief Calcula la aproximacion del seno hiperbolico de la variable.
     * @param x Valor de la variable.
     * @return El resultado de seno hiperbolico de x.
     */
     double sinh_t(double x);

    /**
     * @brief Realiza la aproximacion seno de una variable.
     * @param x Valor de la variable.
     * @return El resultado de sen(x).
     */
     double sin_t(double x);

    /**
     * @brief Realiza la aproximacion del coseno hiperbolico de una variable.
     * @param x Valor de la variable.
     * @return El resultado del coseno hiperbolico de x.
     */
     double cosh_t(double x);

    /**
     * @brief Realiza la aproximaciondel coseno  de una variable.
     * @param x Valor de la variable.
     * @return El resultado del cos(x).
     */
     double cos_t(double x);

    /**
     * @brief Realiza la aproximacion de euler elevado en una variable.
     * @param x Valor de la variable.
     * @return El resultado de e^x.
     */
     double exp_t(double x);

    /**
     * @brief Realiza la aproximacion de logaritmo natural de una variable.
     * @param x Valor de la variable.
     * @return El resultado de ln(x)
     */
     double ln_t(double x);

    /**
     * @brief Realiza la aproximacion de tangente de una variable.
     * @param x Valor de la variable.
     * @return El resultado de tan(x)
     */
     double tan_t(double x);

    /**
     * @brief Realiza la aproximacion de tangente hiperbolico de una variable.
     * @param x Valor de la variable.
     * @return El resultado de tangente hiperbolico de x
     */
     double tanh_t(double x);

    /**
     * @brief Realiza la aproximacion de arcoseno de una variable.
     * @param x Valor de la variable.
     * @return El resultado de acos(x).
     */
     double asin_t(double x);

    /**
 * @brief Realiza la aproximacion de arcotangente de una variable.
 * @param x Valor de la variable.
     * @return El resultado de atan(x).
     */
     double atan_t(double x);

    /**
     * @brief Realiza la aproximacion de raiz cuadrada de una variable.
     * @param x Valor de la variable.
     * @return El resultado de raiz cuadrada de x.
     */
     double sqrt_t(double x);

    /**
     * @brief Realiza la aproximacion de una raiz con indice a de la variable x.
     * @param x Valor de la variable.
     * @param a Valor del indice de la raiz.
     * @returnEl resultado de raiz con indice a de x.
     */
     double root_t(double x, double a);

    /**
     * @brief Realiza la aproximacion de logaritmo de base a para la variable x.
     * @param x Valor de la variable.
     * @param a Valor de la base del logaritmo.
     * @return resultado del logaritmo base a, de la variable x.
     */
     double log_t(double x, double a);
};

#endif // H_FUNTRAS
