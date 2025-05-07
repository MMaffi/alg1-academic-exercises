#include <stdio.h>

int main(void) {

    int num, n1, n2, n3, n4, n5, n6, n7, n8, n9, digito;

    n1 = 0;
    n2 = 0;
    n3 = 0;
    n4 = 0;
    n5 = 0;
    n6 = 0;
    n7 = 0;
    n8 = 0;
    n9 = 0;

    scanf("%d", &num);

    while (num > 0) {
        digito = num % 10;

        switch (digito) {
            case 1:
                n1 = n1 + 1;
                break;

            case 2:
                n2 = n2 + 1;
                break;

            case 3:
                n3 = n3 + 1;
                break;

            case 4:
                n4 = n4 + 1;
                break;

            case 5:
                n5 = n5 + 1;
                break;

            case 6:
                n6 = n6 + 1;
                break;

            case 7:
                n7 = n7 + 1;
                break;

            case 8:
                n8 = n8 + 1;
                break;

            case 9:
                n9 = n9 + 1;
                break;
        }

        num = num / 10;
    }

    if (n1 > 1) {
        printf("Dígito 1 aparece %d vezes\n", n1);
    }
    if (n2 > 1) {
        printf("Dígito 2 aparece %d vezes\n", n2);
    }
    if (n3 > 1) {
        printf("Dígito 3 aparece %d vezes\n", n3);
    }
    if (n4 > 1) {
        printf("Dígito 4 aparece %d vezes\n", n4);
    }
    if (n5 > 1) {
        printf("Dígito 5 aparece %d vezes\n", n5);
    }
    if (n6 > 1) {
        printf("Dígito 6 aparece %d vezes\n", n6);
    }
    if (n7 > 1) {
        printf("Dígito 7 aparece %d vezes\n", n7);
    }
    if (n8 > 1) {
        printf("Dígito 8 aparece %d vezes\n", n8);
    }
    if (n9 > 1) {
        printf("Dígito 9 aparece %d vezes\n", n9);
    }

    return 0;
}
