#include <stdio.h>

int main(void) {

    float preco, preco_reajustado;
    int codigo;

    printf("Informe o preço do produto e o código para condição de pagamento (1, 2, 3, 4): ");
    scanf("%f %d", &preco, &codigo);

    if (codigo == 1) {
        printf("Forma de pagamento a vista em dinheiro ou cheque selecionado. Desconto de 10 por cento\n");
        preco_reajustado = preco - (preco * 0.1);
        printf("O preço com os descontos é: R$ %.2f\n", preco_reajustado);
    } else {
        if (codigo == 2) {
            printf("Forma de pagamento a vista no cartão de crédito selecionado. Desconto de 5 por cento\n");
            preco_reajustado = preco - (preco * 0.05);
            printf("O preço com os descontos é: R$ %.2f\n", preco_reajustado);
        } else {
            if (codigo == 3) {
                printf("Forma de pagamento em duas vezes selecionado. Preço de etiqueta sem juros\n");
                preco_reajustado = preco;
                printf("O preço com os descontos é: R$ %.2f\n", preco_reajustado);
            } else {
                if (codigo == 4) {
                    printf("Forma de pagamento em três vezes selecionado. Preço de etiqueta com juros de 10 por cento\n");
                    preco_reajustado = preco * 1.1;
                    printf("O preço com os descontos é: R$ %.2f\n", preco_reajustado);
                } else {
                    printf("| ERRO | Condição de pagamento inválida! | ERRO |\n");
                }
            }
        }
    }

    return 0;
}
