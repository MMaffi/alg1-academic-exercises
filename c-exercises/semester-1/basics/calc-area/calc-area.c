#include <stdio.h>

int main(void) {

    float A, B, C, tri_area, circ_area, trap_area, quad_area, ret_area;
    #define PI 3.14

    printf("Informe o valor de A: ");
    scanf("%f", &A);

    printf("Informe o valor de B: ");
    scanf("%f", &B);

    printf("Informe o valor de C: ");
    scanf("%f", &C);

    tri_area = (A * C) / 2;
    circ_area = PI * (C * C);
    trap_area = ((A + B) / C) * C;
    quad_area = B * B;
    ret_area = A * B;

    printf("A área do triangulo é: %f\n", tri_area);
    printf("A área do circulo é: %f\n", circ_area);
    printf("A área do tapézio é: %f\n", trap_area);
    printf("A área do quadrado é: %f\n", quad_area);
    printf("A área do retângulo é: %f\n", ret_area);

    return 0;
}
