#include <stdio.h>

int main()
{

    char nombre[20];
    int edad;

    printf("Pon tu nombre: ");
    scanf("%s", &nombre);

    printf("Pon tu edad: ");
    scanf("%d", &edad);

    printf("Hola %s, tu edad es %d",nombre,edad);
    return 0;


}