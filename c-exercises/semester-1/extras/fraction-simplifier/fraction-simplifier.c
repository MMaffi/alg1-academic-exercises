#include <stdio.h>

int main() {
    int a, b, numerador, denominador, resto, mdc, a_simplificado, b_simplificado;

    scanf("%d/%d", &a, &b);

    numerador = a;
    denominador = b;

    if (b != 0) {

        /* Algoritmo de Euclides */
        while (denominador != 0) {
            resto = numerador % denominador;
            numerador = denominador;
            denominador = resto;
        }

        mdc = numerador;

        a_simplificado = a / mdc;
        b_simplificado = b / mdc;

        printf("%d/%d", a_simplificado, b_simplificado);

    }else {
        printf("O denominador não pode ser 0!");
    }

    return 0;
}
