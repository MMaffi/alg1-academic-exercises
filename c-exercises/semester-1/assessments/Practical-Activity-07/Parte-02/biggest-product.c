#include <stdio.h>

int main(void) {

    int mat[10][10], posicao[3][2], N, i, j, prod, maiorproduto;

    maiorproduto = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i = i + 1) {

        for (j = 0; j < N; j = j + 1) {

            scanf("%d", &mat[i][j]);

        }

    }

    for (i = 0; i < N; i = i + 1) {

        for (j = 0; j < N; j = j + 1) {

            if (j + 2 < N) {
                prod = mat[i][j] * mat[i][j + 1] * mat[i][j + 2];
                if (prod > maiorproduto) {
                    maiorproduto = prod;
                    posicao[0][0] = i;
                    posicao[0][1] = j;
                    posicao[1][0] = i;
                    posicao[1][1] = j + 1;
                    posicao[2][0] = i;
                    posicao[2][1] = j + 2;
                }
            }

            if (i + 2 < N) {
                prod = mat[i][j] * mat[i + 1][j] * mat[i + 2][j];
                if (prod > maiorproduto) {
                    maiorproduto = prod;
                    posicao[0][0] = i;
                    posicao[0][1] = j;
                    posicao[1][0] = i + 1;
                    posicao[1][1] = j;
                    posicao[2][0] = i + 2;
                    posicao[2][1] = j;
                }
            }

            if (i + 2 < N && j + 2 < N) {
                prod = mat[i][j] * mat[i + 1][j + 1] * mat[i + 2][j + 2];
                if (prod > maiorproduto) {
                    maiorproduto = prod;
                    posicao[0][0] = i;
                    posicao[0][1] = j;
                    posicao[1][0] = i + 1;
                    posicao[1][1] = j + 1;
                    posicao[2][0] = i + 2;
                    posicao[2][1] = j + 2;
                }
            }

            if (i + 2 < N && j - 2 >= 0) {
                prod = mat[i][j] * mat[i + 1][j - 1] * mat[i + 2][j - 2];
                if (prod > maiorproduto) {
                    maiorproduto = prod;
                    posicao[0][0] = i;
                    posicao[0][1] = j;
                    posicao[1][0] = i + 1;
                    posicao[1][1] = j - 1;
                    posicao[2][0] = i + 2;
                    posicao[2][1] = j - 2;
                }
            }

        }

    }

    printf("%d\n", maiorproduto);
    for (i = 0; i < 3; i = i + 1) {

        printf("%d, %d\n", posicao[i][0], posicao[i][1]);

    }

    return 0;
}
