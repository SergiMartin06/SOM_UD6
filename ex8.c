#include <stdio.h>

int main()
{

    float celsius,fahrenheint;
    printf("Ingresa temp en Celsius: ");
    scanf("%f",&celsius);

    fahrenheint=(celsius*9/5)+32;
    printf("%2f Celsius son %2.f Fareheint",celsius,fahrenheint);


}