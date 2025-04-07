#include <stdio.h>

int main(void) {

    float n1, n2, calc;
    char operacao;

    printf("Informe um valor: ");
    scanf("%f", &n1);

    printf("Informe outro valor: ");
    scanf("%f", &n2);

    printf("Informe uma dessas operações '+' | '-' | '*' | '/': ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        calc = n1 + n2;
        printf("O valor do cálculo com a operação que você escolheu é: %f\n", calc);
    } else {
        if (operacao == '-') {
            calc = n1 - n2;
            printf("O valor do cálculo com a operação que você escolheu é: %f\n", calc);
        } else {
            if (operacao == '*') {
                calc = n1 * n2;
                printf("O valor do cálculo com a operação que você escolheu é: %f\n", calc);
            } else {
                if (operacao == '/') {
                    if (n2 != 0) {
                        calc = n1 / n2;
                        printf("O valor do cálculo com a operação que você escolheu é: %f\n", calc);
                    } else {
                        printf("Operação inválida, pois não é possível dividir um número por 0\n");
                    }
                } else {
                    printf("Você não escolheu uma operação válida.\n");
                }
            }
        }
    }

    return 0;
}
