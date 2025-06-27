#include <stdio.h>

int main(void) {
    int fila[60], n, m, tamanho, i, j, k, valor;
    char operacao;

    tamanho = 0;

    scanf("%d", &n);
    i = 0;

    while (i < n) {

        scanf("%d", &valor);
        j = tamanho - 1;

        while (j >= 0 && fila[j] > valor) {

            fila[j + 1] = fila[j];
            j = j - 1;

        }

        fila[j + 1] = valor;
        tamanho = tamanho + 1;
        i = i + 1;

    }

    scanf("%d", &m);
    i = 0;

    while (i < m) {

        scanf(" %c", &operacao);

        if (operacao == 'I') {
            scanf("%d", &valor);
            if (tamanho == 59) {
                printf("A fila está cheia, acho que não vai dar tempo!\n");
            } else {
                j = tamanho - 1;

                while (j >= 0 && fila[j] > valor) {

                    fila[j + 1] = fila[j];
                    j = j - 1;

                }

                fila[j + 1] = valor;
                tamanho = tamanho + 1;
                k = 0;

                while (k < tamanho) {

                    printf("%d ", fila[k]);
                    k = k + 1;

                }

                printf("\n");
            }
        }

        if (operacao == 'R') {
            if (tamanho == 0) {
                printf("\nAcabaram as tarefas, vá descansar!\n\n");
            } else {
                printf("%d\n", fila[0]);

                j = 0;

                while (j < tamanho - 1) {

                    fila[j] = fila[j + 1];
                    j = j + 1;

                }

                tamanho = tamanho - 1;

                if (tamanho != 0) {
                    k = 0;

                    while (k < tamanho) {

                        printf("%d ", fila[k]);
                        k = k + 1;

                    }

                    printf("\n");
                }
            }
        }

        i = i + 1;

    }

    return 0;
}
