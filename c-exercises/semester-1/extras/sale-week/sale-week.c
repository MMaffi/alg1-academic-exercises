#include <stdio.h>

int main(void) {

    int i, dia_semana;

    float qtd_vendas, valor_vendas, total_valor_vendas, media_vendas, media_valor_vendas, soma_vendas, soma_valor_vendas, menor_valor_medio, media_diaria;

    total_valor_vendas = 0.0;

    soma_vendas = 0.0;

    soma_valor_vendas = 0.0;

    for (i = 1; i <= 5; i = i + 1) {

        media_diaria = 0.0;

        scanf("%f %f", &qtd_vendas, &valor_vendas);

        total_valor_vendas = total_valor_vendas + valor_vendas;

        soma_vendas = soma_vendas + qtd_vendas;

        soma_valor_vendas = soma_valor_vendas + valor_vendas;

        if (qtd_vendas > 0) {
            media_diaria = valor_vendas / qtd_vendas;
        }else {
            media_diaria = 0.0;
        }

        if (i == 1) {

            menor_valor_medio = media_diaria;

            dia_semana = 1;
        }

        if (media_diaria < menor_valor_medio) {

            menor_valor_medio = media_diaria;

            switch (i) {
                case 1:
                    dia_semana = 1;
                    break;

                case 2:
                    dia_semana = 2;
                    break;

                case 3:
                    dia_semana = 3;
                    break;

                case 4:
                    dia_semana = 4;
                    break;

                case 5:
                    dia_semana = 5;
                    break;
            }

        }

    }

    media_vendas = soma_vendas / 5;

    media_valor_vendas = soma_valor_vendas / soma_vendas;

    printf("Vendas da semana: R$ %.2f\n", total_valor_vendas);
    printf("Quantidade média de vendas: %.2f\n", media_vendas);
    printf("Valor médio por venda: R$ %.2f\n", media_valor_vendas);

    if (dia_semana == 1) {
        printf("Menor valor médio: Segunda-feira (R$ %.2f)\n", menor_valor_medio);
    }else {
        if (dia_semana == 2) {
            printf("Menor valor médio: Terça-feira (R$ %.2f)\n", menor_valor_medio);
        }else {
            if (dia_semana == 3) {
                printf("Menor valor médio: Quarta-feira (R$ %.2f)\n", menor_valor_medio);
            }else {
                if (dia_semana == 4) {
                    printf("Menor valor médio: Quinta-feira (R$ %.2f)\n", menor_valor_medio);
                }else{
                    if (dia_semana == 5) {
                        printf("Menor valor médio: Sexta-feira (R$ %.2f)\n", menor_valor_medio);
                    }
                }
            }
        }
    }

    return 0;
}
