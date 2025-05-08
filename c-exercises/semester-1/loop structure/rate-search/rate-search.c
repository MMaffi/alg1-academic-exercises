#include <stdio.h>

int main(void) {

    int idade, nota_produto, qtd_mulher_bom, qtd_mulher_ruim, qtd_homem_pessimo, total_homem, total_mulher, executa;
    char sexo, continua_pesquisa;

    executa = 1;
    continua_pesquisa = 's';
    total_homem = 0;
    total_mulher = 0;
    qtd_homem_pessimo = 0;
    qtd_mulher_bom = 0;
    qtd_mulher_ruim = 0;

    printf("Bem vindo à avaliações de produtos!\n");

    while (executa == 1) {
        printf("Qual a idade? ");
        scanf("%d", &idade);
        printf("Qual o sexo?\n");
        printf("Responda com 'm' para MASCULINO e 'f' para FEMININO\nR: ");
        scanf(" %c", &sexo);
        printf("Qual a opinião sobre o produto?\n");
        printf("1 - péssimo\n2 - ruim\n3 - regular\n4 - bom\n5 - ótimo\nR: ");
        scanf("%d", &nota_produto);
        printf("Deseja adicionar mais pessoas?\n");
        printf("Responda com 's' para SIM e 'n' para NÃO \nR: ");
        scanf(" %c", &continua_pesquisa);

        if (sexo == 'm') {
            total_homem = total_homem + 1;
            if (nota_produto == 1) {
                qtd_homem_pessimo = qtd_homem_pessimo + 1;
            }
        }else {
            if (sexo == 'f') {
                total_mulher = total_mulher + 1;
                if (idade > 40 && nota_produto == 4) {
                    qtd_mulher_bom = qtd_mulher_bom + 1;
                }
                if (idade > 50 && nota_produto == 2) {
                    qtd_mulher_ruim = qtd_mulher_ruim + 1;
                }
            }
        }

        if (continua_pesquisa == 'n') {
            executa = 0;
        }
    }

    printf("Total de mulheres com mais de 40 anos que votaram em BOM: %d\n", qtd_mulher_bom);
    printf("Total de mulheres com mais de 50 anos que votaram em RUIM: %d\n", qtd_mulher_ruim);
    printf("Total de homens que votaram em péssimo: %d\n", qtd_homem_pessimo);
    printf("Total de homens que perticiparam da pesquisa: %d\n", total_homem);
    printf("Total de mulheres que perticiparam da pesquisa: %d\n", total_mulher);

    return 0;
}
