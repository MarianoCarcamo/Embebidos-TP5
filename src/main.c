/************************************************************************************************
Copyright (c) 2023, Mariano Carcamo marianocarcamo98@gmail.com
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and
associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute,
sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial
portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT
NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
SPDX-License-Identifier: MIT
*************************************************************************************************/

/**
 * \cond
 * El archivo no será expuesto en la página generada por doxygen
 */

/** \brief Programa de ejemplo para el uso de calculadora.h
 **
 ** En este archivo se presenta el modo de hacer un correcto uso de la librería calculadora.h.
 ** Se realizarán las operaciones básicas de suma, resta, multiplicación y division como ejemplo de
 ** aplicacion.
 **
 ** \addtogroup Aplicacion
 ** @{ */

/* === Headers files inclusions =============================================================== */

#include <stdio.h>
#include "calculadora.h"

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

/**
 * @brief Funcion definida por el usuario
 * Realiza la suma de a y b, es decir, a + b
 * @param a Primer término
 * @param b Segundo término
 * @return Retorna la suma como un entero.
 */
int Suma(int a, int b);

/**
 * @brief Funcion definida por el usuario
 * Realiza la diferencia de a y b, es decir, a - b
 * @param a Primer término
 * @param b Segundo término
 * @return Retorna la diferencia como un entero.
 */
int Resta(int a, int b);

/**
 * @brief Funcion definida por el usuario
 * Realiza el producto de a y b, es decir, a * b
 * @param a Primer elemento
 * @param b Segundo elemento
 * @return Retorna el producto como un entero.
 */
int Producto(int a, int b);

/**
 * @brief Funcion definida por el usuario
 * Realiza el cociente de a y b, es decir, a / b
 * @param a Dividendo
 * @param b Divisor
 * @return Retorna el cociente como un entero.
 */
int Cociente(int a, int b);

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

int Suma(int a, int b) {
    return (a + b);
}

int Resta(int a, int b) {
    return (a - b);
}

int Producto(int a, int b) {
    return (a * b);
}

int Cociente(int a, int b) {
    return (a / b);
}

/* === Public function implementation ========================================================== */

int main(void) {
    // Declaro la variable en la que se guardará el resultado.
    int ans = 0;
    /// Creo la calculadora donde voy a guardar la operaciones definidas
    calculadora_t mi_calculadora = CrearCalculadora();

    // Agrego las respectivas operaciones
    AgregarOperacion(mi_calculadora, '+', Suma);
    AgregarOperacion(mi_calculadora, '-', Resta);
    AgregarOperacion(mi_calculadora, '*', Producto);
    AgregarOperacion(mi_calculadora, '/', Cociente);

    // Realizo los calculos e imprimo por pantalla los resultados,
    ans = Calcular(mi_calculadora, "7+3");
    printf("7 + 3 = %i\n", ans);

    ans = Calcular(mi_calculadora, "7-3");
    printf("7 - 3 = %i\n", ans);

    ans = Calcular(mi_calculadora, "7*3");
    printf("7 * 3 = %i\n", ans);

    ans = Calcular(mi_calculadora, "7/3");
    printf("7 / 3 = %i\n", ans);

    return 0;
}

/**
 * \endcond
 */

/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */