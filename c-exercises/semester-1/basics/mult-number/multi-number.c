#include <stdio.h>

int main(void) {

    int a, b, calc;

    printf("Digite um valor: ");
    scanf("%d", &a);

    printf("Digite outro valor: ");
    scanf("%d", &b);

    calc = a * b;

    printf("A multiplicação entre %d e %d é: %d", a, b, calc);

    return 0;
}
