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

/** \brief Brief description of the file
 **
 ** Full file description
 **
 ** \addtogroup name Module denomination
 ** \brief Brief description of the module
 ** @{ */

/* === Headers files inclusions =============================================================== */

#include <stdio.h>
#include "calculadora.h"

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

int Suma(int a, int b);

int Resta(int a, int b);

int Producto(int a, int b);

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
    int ans = 0;
    calculadora_t mi_calculadora = CrearCalculadora();

    AgregarOperacion(mi_calculadora, '+', Suma);
    AgregarOperacion(mi_calculadora, '-', Resta);
    AgregarOperacion(mi_calculadora, '*', Producto);
    AgregarOperacion(mi_calculadora, '/', Cociente);

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

/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */