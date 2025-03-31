#include <stdio.h>

int main(void) {

    float qtdlatao, qtdcobre, qtdzinco;

    printf("Informe a quantidade de latão que deseja: ");
    scanf("%f", &qtdlatao);

    qtdcobre = 0.7 * qtdlatao;
    qtdzinco = 0.3 * qtdlatao;

    printf("A quantidade de cobre necessária para fazer %f latão é: %f\n", qtdlatao, qtdcobre);
    printf("A quantidade de zinco necessária para fazer %f latão é: %f\n", qtdlatao, qtdzinco);

    return 0;
}
