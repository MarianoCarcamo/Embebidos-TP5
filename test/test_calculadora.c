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
void test_agregar_suma(void) {
    calculadora_t calculadora = CrearCalculadora();

    int Suma(int a, int b) {
        return (a + b);
    }

    TEST_ASSERT_TRUE(AgregarOperacion(calculadora, '+', Suma));
}

// // Hacer suma
// void test_hacer_suma(void) {
//     calculadora_t calculadora = CrearCalculadora();

//     int Suma(int a, int b) {
//         return a + b;
//     }

//     TEST_ASSERT_TRUE(AgregarOperacion(calculadora, '+', Suma));
//     TEST_ASSERT_EQUAL(6, Calcular(calculadora, "2+4"));
//     TEST_ASSERT_EQUAL(7, Calcular(calculadora, "2+5"));
// }