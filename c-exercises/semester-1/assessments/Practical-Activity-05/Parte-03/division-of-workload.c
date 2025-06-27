#include <stdio.h>

int main(void) {
    int tarefas[10000], n, i, soma_total, menor_diferenca, soma_parcial, soma_restante, diferenca;

    scanf("%d", &n);

    for (i = 0; i < n; i = i + 1) {

        scanf("%d", &tarefas[i]);

    }

    soma_total = 0;

    for (i = 0; i < n; i = i + 1) {

        soma_total = soma_total + tarefas[i];

    }

    menor_diferenca = soma_total;
    soma_parcial = 0;

    for (i = 0; i < n; i = i + 1) {

        soma_parcial = soma_parcial + tarefas[i];
        soma_restante = soma_total - soma_parcial;
        diferenca = soma_parcial - soma_restante;

        if (diferenca < 0) {
            diferenca = -1 * diferenca;
        }

        if (diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
        }

    }

    printf("%d\n", menor_diferenca);

    return 0;
}
