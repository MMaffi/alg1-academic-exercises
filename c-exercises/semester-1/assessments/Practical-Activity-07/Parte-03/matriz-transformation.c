#include <stdio.h>

int main(void) {

    int n, i, j, troca, mat[100][100], trocas[100], usado[100], passado[100], soma, pos, valida, ciclo;

    troca = 0;
    valida = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i = i + 1) {

        usado[i] = 0;
        passado[i] = 0;

    }

    for (i = 0; i < n; i = i + 1) {

        soma = 0;
        pos = -1;
        for (j = 0; j < n; j = j + 1) {

            scanf("%d", &mat[i][j]);

            if (mat[i][j] == 1) {
                soma = soma + 1;
                pos = j;
            }else {
                if (mat[i][j] != 0) {
                    valida = 0;
                }
            }

        }

        if (soma != 1 || usado[pos] == 1) {
            valida = 0;
        }else {
            trocas[i] = pos;
            usado[pos] = 1;
        }

    }

    if (valida == 0) {
        printf("impossível\n");
    }else {
        for (i = 0; i < n; i = i + 1) {

            if (passado[i] == 0) {
                ciclo = 0;
                j = i;

                while (passado[j] == 0) {

                    passado[j] = 1;
                    j = trocas[j];
                    ciclo = ciclo + 1;

                }
                if (ciclo > 0) {
                    troca = troca + (ciclo - 1);
                }
            }

        }

        printf("%d troca(s)\n", troca);
    }

    return 0;
}
