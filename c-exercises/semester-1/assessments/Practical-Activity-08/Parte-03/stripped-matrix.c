#include <stdio.h>

int Despojado(int num) {

    int i, count, valido, vezes, resultado, original;

    i = 2;
    count = 0;
    valido = 1;
    resultado = 0;
    original = num;

    while (i <= original && num > 1) {
        if (num % i == 0) {
            vezes = 0;
            while (num % i == 0) {
                num = num / i;
                vezes = vezes + 1;
            }
            if (vezes > 1) {
                valido = 0;
            }
            count = count + 1;
        }
        i = i + 1;
    }

    if (count >= 2 && valido == 1) {
        resultado = 1;
    }

    return resultado;
}

int juntar(int a, int b) {
    int resultado;

    if (b < 10) {
        resultado = a * 10 + b;
    } else {
        if (b < 100) {
            resultado = a * 100 + b;
        } else {
            resultado = a * 1000 + b;
        }
    }

    return resultado;
}

int main(void) {
    int M, N, i, j, matriz[8][8], binaria[8][7], numero;

    scanf("%d %d", &M, &N);

    for (i = 0; i < M; i = i + 1) {
        for (j = 0; j < N; j = j + 1) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < M; i = i + 1) {
        for (j = 0; j < N - 1; j = j + 1) {
            numero = juntar(matriz[i][j], matriz[i][j + 1]);
            binaria[i][j] = Despojado(numero);
        }
    }

    for (i = 0; i < M; i= i + 1) {
        for (j = 0; j < N - 1; j = j + 1) {
            printf("%d", binaria[i][j]);
            if (j < N - 2) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
