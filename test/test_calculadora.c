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

int Suma(int a, int b) {
    return (a + b);
}

// Agragar operacion
void test_agregar_operacion(void) {
    calculadora_t calculadora = CrearCalculadora();

    TEST_ASSERT_TRUE(AgregarOperacion(calculadora, '+', Suma));
}

// Hacer suma
void test_hacer_suma(void) {
    calculadora_t calculadora = CrearCalculadora();

    AgregarOperacion(calculadora, '+', Suma);
    TEST_ASSERT_EQUAL(6, Calcular(calculadora, "2+4"));
    TEST_ASSERT_EQUAL(7, Calcular(calculadora, "2+5"));
}

int Resta(int a, int b) {
    return (a - b);
}

// Hacer resta
void test_hacer_resta(void) {
    calculadora_t calculadora = CrearCalculadora();

    AgregarOperacion(calculadora, '-', Resta);
    TEST_ASSERT_EQUAL(2, Calcular(calculadora, "4-2"));
    TEST_ASSERT_EQUAL(-1, Calcular(calculadora, "3-4"));
}