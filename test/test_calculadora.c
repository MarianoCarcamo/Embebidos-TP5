// Hacer una suma
// Agragar operacion resta
// Hacer una resta
// Agragar operacion multiplicacion
// Hacer una multiplicacion
// Agragar operacion division
// Hacer una division

#include "unity.h"
#include "calculadora.h"

// Debe crear una calculadora abstracta
void test_crear_calculadora(void) {
    TEST_ASSERT_TRUE(CrearCalculadora() != NULL);
}

// Agragar operacion suma
void test_agragar_suma(void) {
    calculadora_t calculadora = CrearCalculadora();

    int Suma(int a, int b) {
        return a + b;
    }

    TEST_ASSERT_TRUE(AgregarOperacion(calculadora, '+', Suma));
}
