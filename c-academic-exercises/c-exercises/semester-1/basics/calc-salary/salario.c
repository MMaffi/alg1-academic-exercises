#include <stdio.h>

int main(void)
{
    int idade;
    float Sbruto, Sliquido;
    char nome[60], cargo[100];
    #define REAJUSTE 0.38
    #define GRATIFICACAO 0.20

    printf("Qual é o seu nome? ");
    scanf("%59[^\n]", nome);

    printf("Qual sua idade? ");
    scanf("%d", &idade);

    printf("Qual o seu cargo? ");
    scanf(" %99[^\n]", cargo);

    printf("Qual o seu salário bruto? ");
    scanf("%f", &Sbruto);

    Sliquido = Sbruto + (Sbruto * REAJUSTE) + (Sbruto * GRATIFICACAO);
    Sliquido = Sliquido - (Sliquido * 0.15);

    printf("Olá %s, vocÊ tem %d anos, trabalha com %s e seu salário líquido é %f\n", nome, idade, cargo, Sliquido);

    return 0;
}
