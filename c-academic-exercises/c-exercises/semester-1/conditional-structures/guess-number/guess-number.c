#include <stdio.h>

int main(void) {

    char resp1, resp2, resp3;

    printf("Pense em um número de 1 à 8 para que possamos advinha-lo!\n");
    printf("Agora que já pensou vamos começar!\n");

    printf("O número é maior que 4? Responda com 'S' ou 'N' ");
    scanf(" %c", &resp1);
    printf("O número é par? Responda com 'S' ou 'N' ");
    scanf(" %c", &resp2);

    if (resp1 == 'S') { /* 5, 6, 7, 8 */
        if (resp2 == 'S') { /* 6, 8 */
            printf("O número é maior que 7? Responda com 'S' ou 'N' ");
            scanf(" %c", &resp3);
            if (resp3 == 'S') {
                printf("O número que você pensou foi 8\n");
            } else {
                printf("O número que você pensou foi 6\n");
            }
        } else { /* 5, 7 */
            printf("O número é maior que 6? Responda com 'S' ou 'N' ");
            scanf(" %c", &resp3);
            if (resp3 == 'S') {
                printf("O número que você pensou foi 7\n");
            } else {
                printf("O número que você pensou foi 5\n");
            }
        }
    } else { /* 1, 2, 3, 4 */
        if (resp2 == 'S') { /* 2, 4 */
            printf("O número é maior que 3? Responda com 'S' ou 'N' ");
            scanf(" %c", &resp3);
            if (resp3 == 'S') {
                printf("O número que você pensou foi 4\n");
            } else {
                printf("O número que você pensou foi 2\n");
            }
        } else { /* 1, 3 */
            printf("O número é maior que 2? Responda com 'S' ou 'N' ");
            scanf(" %c", &resp3);
            if (resp3 == 'S') {
                printf("O número que você pensou foi 3\n");
            } else {
                printf("O número que você pensou foi 1\n");
            }
        }
    }

    return 0;
}
