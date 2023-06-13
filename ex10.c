#include <stdio.h>

int main()
{

    float metros, pulgadas;
    printf("Ingresa metros: ");
    scanf("%f",&metros);

    pulgadas=metros/0.0254;

    printf("Pulgadas: %2f", pulgadas);


}