/* ------------------------------------------------------------
 * file: funtras.hpp
 * autores: @estalvgs1999
 * 
 * @brief Biblioteca estatica que permite aproximar el valor numerico de
 *        un conjunto de funciones trascendentes de variable real utili-
 *        zando unicamente las operaciones básicas: suma(+), resta(-) y
 *        multiplicacion(*).
 * 
 * @version 0.1
 */

#ifndef _FUNTRAS_H
#define _FUNTRAS_H

// Bibliotecas
#include <iostream>
#include <cmath>


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
        static double fact(int n);

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
        static double div_t(double x);

        /**
         * @brief Retorna la base elevada a la potencia del exponente.
         * @param x Valor del exponente.
         * @param a Valor de la base.
         * @return El resultado de realizar a^x.
         */ 
        static double power_t(double x, double a);




};

#endif // _FUNTRAS_H
