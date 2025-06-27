#include <stdio.h>

int main(void) {
    int N, M, campo[12][12], minas_vizinhas[12][12], i, j, k, l, linha, coluna, total_ampulheta, minas_ampulheta, contagem, chance, margem;
    float percentual;

    total_ampulheta = 0;
    minas_ampulheta = 0;
    chance = 0;

    i = 0;
    while (i < 12) {

        j = 0;
        while (j < 12) {

            campo[i][j] = 0;
            minas_vizinhas[i][j] = 0;
            j = j + 1;

        }
        i = i + 1;

    }

    scanf("%d %d", &N, &M);

    i = 0;
    while (i < M) {

        scanf("%d %d", &linha, &coluna);
        campo[linha][coluna] = 9;
        i = i + 1;

    }

    i = 0;
    while (i < N) {

        j = 0;
        while (j < N) {

            if (campo[i][j] == 9) {
                minas_vizinhas[i][j] = -1;
            } else {
                contagem = 0;
                k = i - 1;
                while (k <= i + 1) {

                    l = j - 1;
                    while (l <= j + 1) {

                        if (k >= 0 && k < N && l >= 0 && l < N) {
                            if (campo[k][l] == 9) {
                                contagem = contagem + 1;
                            }
                        }
                        l = l + 1;

                    }
                    k = k + 1;

                }
                minas_vizinhas[i][j] = contagem;
            }
            j = j + 1;

        }
        i = i + 1;

    }

    i = 0;
    while (i < N) {

        j = 0;
        while (j < N) {

            if (minas_vizinhas[i][j] == -1) {
                printf("M");
            } else {
                printf("%d", minas_vizinhas[i][j]);
            }
            j = j + 1;

        }
        printf("\n");
        i = i + 1;

    }

    printf("\n");

    i = 0;
    while (i < N) {

        if (i < N / 2) {
            margem = i;
        } else {
            margem = N - 1 - i;
        }

        j = margem;
        while (j <= N - 1 - margem) {

            total_ampulheta = total_ampulheta + 1;
            if (campo[i][j] == 9) {
                minas_ampulheta = minas_ampulheta + 1;
            }
            j = j + 1;

        }

        i = i + 1;

    }

    if (total_ampulheta > 0) {
        percentual = minas_ampulheta * 100.0 / total_ampulheta;
        chance = percentual + 0.5;
    }

    printf("%d%%\n", chance);

    return 0;
}
