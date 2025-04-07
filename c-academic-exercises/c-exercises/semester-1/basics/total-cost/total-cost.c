#include <stdio.h>

int main(void) {
    float x, y, z, area, Totlitros, Totcusto;
	int Totlatas, TotRolos;

    printf("Digite o comprimento da aresta x: ");
    scanf("%f", &x);

    printf("Digite o comprimento da aresta y: ");
    scanf("%f", &y);

    printf("Digite o comprimento da aresta z: ");
    scanf("%f", &z);

    area = 2 * (x * y + x * z + y * z);

    Totlitros = 3 * area;

    /* sempre que soma o antecessor de quem está dividindo ele arredonda para cima */
    Totlatas = (Totlitros + 4) / 5;

    TotRolos = (area + 9) / 10;

    Totcusto = (Totlatas * 45) + (area * 20) + (TotRolos * 5);

    printf("O total de latas é: %d\n", Totlatas);
    printf("O custo total para o processo é: %f\n", Totcusto);

    return 0;
}
