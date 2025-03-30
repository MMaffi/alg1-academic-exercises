#include <stdio.h>

int main(void) {

    int a, b, c, R, S;
    float D;

    printf("Digite um número: ");
    scanf("%d", &a);

    printf("Digite outro número: ");
    scanf("%d", &b);

    printf("Digite o último número: ");
    scanf("%d", &c);

    R = (a + b) * (a + b);
    S = (b + c) * (b + c);
    D = (R + S) / 2;

    printf("O valor do cálculo é: %f", D);

    return 0;
}
