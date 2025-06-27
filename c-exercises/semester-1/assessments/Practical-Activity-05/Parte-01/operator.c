#include <stdio.h>

int main(void) {

    int T, x[100], y[100], z[100], expressao[100], erros[100], totalerros, i, exatual, resultado, erro_indice;

    char jogador[100], resposta[100];

    T = 1;

    scanf("%d", &T);

    while (T != 0) {

        totalerros = 0;

        for (i = 0; i < T; i = i + 1) {

            scanf("%d %d=%d", &x[i], &y[i], &z[i]);

        }

        for (i = 0; i < T; i = i + 1) {

            scanf(" %c %d %c", &jogador[i], &expressao[i], &resposta[i]);

        }

        for (i = 0; i < T; i = i + 1) {

            exatual = expressao[i] - 1;

            if (resposta[i] == '+') {
                resultado = x[exatual] + y[exatual];
            } else {
                if (resposta[i] == '-') {
                    resultado = x[exatual] - y[exatual];
                } else {
                    if (resposta[i] == '*') {
                        resultado = x[exatual] * y[exatual];
                    } else {
                        resultado = 0;
                    }
                }
            }

            if (resultado != z[exatual]) {
                erros[totalerros] = i;
                totalerros = totalerros + 1;
            }

        }

        if (totalerros == 0) {
            printf("Todos passaram!\n");
        } else {
            if (totalerros == T) {
                printf("Ninguém passou!\n");
            } else {
                for (i = 0; i < totalerros; i = i + 1) {

                    erro_indice = erros[i];
                    printf("%c", jogador[erro_indice]);

                    if (i < totalerros - 1) {
                        printf(" ");
                    }

                    printf("\n");

                }

            }
        }

        scanf("%d", &T);

    }

    return 0;
}
