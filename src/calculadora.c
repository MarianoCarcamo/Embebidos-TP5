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

#include "calculadora.h"
#include <stdlib.h>
#include <string.h>

/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

typedef struct operacion_s * operacion_t;

struct calculadora_s {
    operacion_t operaciones;
};

struct operacion_s {
    char operador;
    funcion_t funcion;
    operacion_t siguiente;
};

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */

operacion_t BuscarOperacion(calculadora_t calculadora, char operador);

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

calculadora_t CrearCalculadora(void) {
    calculadora_t calculadora = malloc(sizeof(struct calculadora_s));
    if (calculadora) {
        memset(calculadora, 0, sizeof(struct calculadora_s));
    }
    return calculadora;
}

bool AgregarOperacion(calculadora_t calculadora, char operador, funcion_t funcion) {
    operacion_t operacion = malloc(sizeof(struct operacion_s));

    if ((operacion) && !BuscarOperacion(calculadora, operador)) {
        operacion->operador = operador;
        operacion->funcion = funcion;
        operacion->siguiente = calculadora->operaciones;
        // calculadora->operaciones = operacion;
    }
    return (operacion != NULL);
}

operacion_t BuscarOperacion(calculadora_t calculadora, char operador) {
    operacion_t result = NULL;
    // operacion_t actual = calculadora->operaciones;

    // if (actual != NULL) {
    //     for (operacion_t actual = calculadora->operaciones; actual->siguiente != NULL;
    //          actual = actual->siguiente) {

    //         if (actual->operador == operador) {
    //             result = actual;
    //             break;
    //         }
    //     }
    // }
    return result;
}

int Calcular(calculadora_t calculadora, char * cadena) {
    int a, b;
    char operador;
    int resultado = 0;

    for (int index = 0; index < strlen(cadena); index++) {
        if (cadena[index] < '0') {
            operador = cadena[index];
            a = atoi(cadena);
            b = atoi(cadena + index + 1);
            break;
        }
    }

    operacion_t operacion = BuscarOperacion(calculadora, operador);
    if (operacion) {
        resultado = operacion->funcion(a, b);
    }

    return resultado;
}

/* === Public function implementation ========================================================== */

/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */