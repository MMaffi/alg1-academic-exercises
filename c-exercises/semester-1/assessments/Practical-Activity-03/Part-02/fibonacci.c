#include <stdio.h>

int main(void) {

    int qtdteste, i, j, qtdseq, n1, n2, aux;

    scanf("%d", &qtdteste);

    for (i = 0; i < qtdteste; i = i + 1) {

        n1 = 0;
        n2 = 1;
        aux = 0;

        scanf("%d", &qtdseq);

        for (j = 1; j <= qtdseq; j = j + 1) {

            if (j == 1) {
                printf("%d", n1);
            } else {
                if (j == 2) {
                    printf("%d", n2);
                }
                if (j > 2) {
                    aux = n1 + n2;
                    n1 = n2;
                    n2 = aux;

                    /* Verificação para colocar o sinal de negativo */
                    if (j % 2 == 1) {
                          printf("-");
                    }

                    printf("%d", aux);
                }
            }

            /* Verificação para colocar a virgula e nao colocar no último */
            if (j != qtdseq) {
                printf(", ");
            }
        }
        printf("\n");
    }

    return 0;
}
