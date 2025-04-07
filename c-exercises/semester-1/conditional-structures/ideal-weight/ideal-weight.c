#include <stdio.h>

int main(void) {

    float altura, peso_ideal;
    char sexo;

    printf("Informe o seu sexo ('M' para masculino - 'F' para feminino): ");
    scanf("%c", &sexo);
    printf("Informe a sua altura: ");
    scanf("%f", &altura);

    if (sexo == 'M'){
        peso_ideal = (altura * 72.1) - 58.0;
        printf("Como você é do sexo MASCULINO, então com base na sua altura seu peso ideal é: %.2f\n", peso_ideal);
    } else {
        peso_ideal = (altura * 62.1) - 42.7;
        printf("Como você é do sexo FEMININO, então com base na sua altura seu peso ideal é: %.2f\n", peso_ideal);
    }

    return 0;
}
