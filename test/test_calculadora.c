// Agragar operaciones basicas de suma, resta, multiplicacion y division
// Realizar una calculo con cada operacion

#include "unity.h"
#include "calculadora.h"

// Debe crear una calculadora abstracta
void test_crear_calculadora(void) {
    TEST_ASSERT_TRUE(CrearCalculadora() != NULL);
}