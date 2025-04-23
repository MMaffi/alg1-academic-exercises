#include <stdio.h>

int main(void) {

    int valor, quad, calc, i;

    quad = 0;

    printf("Digite um número: ");
    scanf("%d", &valor);

    calc = valor * 2;

    for (i = 1; i < calc; i = i + 2) {
        quad = quad + i;
    }

    printf("O quadrado do número digitado é: %d\n", quad);

    return 0;
}
