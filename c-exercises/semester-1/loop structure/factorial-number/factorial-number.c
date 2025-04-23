#include <stdio.h>

int main(void) {

    int valor, calc, i;

    calc = 1;

    printf("Digite um número: ");
    scanf("%d", &valor);

    for (i = 1; i <= valor; i = i + 1) {

        calc = calc * i;

    }

    printf("O fatorial de %d é: %d\n", valor, calc);

    return 0;
}
