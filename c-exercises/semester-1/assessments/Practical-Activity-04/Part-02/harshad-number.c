#include <stdio.h>

int main() {
    int x, temp, soma, d, abaixo, acima, soma_abaixo, ta, soma_acima, tb, sera_abaixo, sera_acima, fim;

    scanf("%d", &x);

    while (x != 0) {
        temp = x;
        soma = 0;

        while (temp > 0) {
            soma = soma + temp % 10;
            temp = temp / 10;
        }

        if (soma != 0 && x % soma == 0) {
            printf("%d\n", x);
        } else {
            d = 1;
            fim = 0;

            while (fim == 0) {
                abaixo = x - d;
                acima = x + d;

                soma_abaixo = 0;
                ta = abaixo;
                while (ta > 0) {
                    soma_abaixo = soma_abaixo + ta % 10;
                    ta = ta / 10;
                }
                if (soma_abaixo != 0 && abaixo % soma_abaixo == 0) {
                    sera_abaixo = 1;
                } else {
                    sera_abaixo = 0;
                }

                soma_acima = 0;
                tb = acima;
                while (tb > 0) {
                    soma_acima = soma_acima + tb % 10;
                    tb = tb / 10;
                }
                if (soma_acima != 0 && acima % soma_acima == 0) {
                    sera_acima = 1;
                } else {
                    sera_acima = 0;
                }

                if (sera_abaixo == 1 && sera_acima == 1) {
                    if (abaixo < acima) {
                        printf("%d ou %d\n", abaixo, acima);
                    } else {
                        printf("%d ou %d\n", acima, abaixo);
                    }
                    fim = 1;
                } else {
                    if (sera_abaixo == 1) {
                        printf("%d\n", abaixo);
                        fim = 1;
                    }
                    if (sera_acima == 1 && fim == 0) {
                        printf("%d\n", acima);
                        fim = 1;
                    }
                }
                d = d + 1;
            }
        }
        scanf("%d", &x);
    }

    return 0;
}
