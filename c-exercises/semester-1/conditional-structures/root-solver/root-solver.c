#include <stdio.h>

int main(void) {

    int a, b, c;
    float delta;

    printf("Informe um  número inteiro: "); /* b2 - 4 a c */
    scanf("%d", &a);
    printf("Informe outro número inteiro: ");
    scanf("%d", &b);
    printf("Informe o ultimo número inteiro: ");
    scanf("%d", &c);

    delta = (b * b) - 4 * a * c;

    if (delta > 0) {
        printf("A equação tem duas raízes reais!\n");
    } else {
        if(delta == 0) {
            printf("A equação tem uma raíz real!\n");
        } else {
            printf("A equação não possui raízes reais!\n");
        }
    }

    return 0;
}
