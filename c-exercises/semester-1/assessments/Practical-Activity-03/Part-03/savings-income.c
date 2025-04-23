#include <stdio.h>

int main(void) {

    int x, i, p, mesatual;
    float saldo, totinvestido, investimento, rendimento, rendimentomensal, bonus, taxa;

    saldo = 0.0;
    totinvestido = 0.0;
    rendimento = 0.0;

    scanf("%d", &i);  /* mês inicial */
    scanf("%d", &p);  /* número de meses */

    for (x = 0; x < p; x = x + 1) {

        rendimentomensal = 0.0;
        bonus = 0.0;
        taxa = 0.0;

        mesatual = (i + x - 1) % 12 + 1;

        if (saldo > 0) {
            if (mesatual == 1) {
                rendimentomensal = saldo * 0.015;
                saldo = saldo + rendimentomensal;
                rendimento = rendimento + rendimentomensal;
            }else {
                if (mesatual == 8) {
                    rendimentomensal = saldo * 0.003;
                    saldo = saldo + rendimentomensal;
                    rendimento = rendimento + rendimentomensal;
                }else {
                    rendimentomensal = saldo * 0.005;
                    saldo = saldo + rendimentomensal;
                    rendimento = rendimento + rendimentomensal;
                }
            }
        }

        scanf("%f", &investimento);

        if (investimento > 0) {
            totinvestido = totinvestido + investimento;
        }

        saldo = saldo + investimento;
    }

    printf("Saldo: %.2f\n", saldo);
    printf("Total Investido: %.2f\n", totinvestido);
    printf("Rendimento Total: %.2f\n", rendimento);

    return 0;
}
