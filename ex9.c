#include <stdio.h>
#define PI 3.14159265359

int main()
{

    float radio,area,perimetro;
    printf("Ingresa radio: ");
    scanf("%f",&radio);

    area=PI*radio*radio;
    perimetro=2*PI*radio;

    printf("Area: %2f", area);
    printf("\nPerimetro: %2f",perimetro);


}