#include <stdio.h>

int main(void) {
    
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    if (a >= (b + c) || b >= (a + c) || c >= (b + a)) {
        printf("Triângulo inválido.");
    } else {
        if (a == 0 || b == 0 || c == 0) {
            printf("Triângulo inválido.");
        } else {
            if (a == b && b == c ) {
                printf("Triângulo equilátero.");
            } else {
                if (a != b && b != c && c != a) {
                    printf("Triângulo escaleno.");
                }else {
                    printf("Triângulo isósceles."); 
                }
            }
        }
    }
    
    return 0;
}