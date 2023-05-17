#include <stdio.h>
#include <math.h>
int main()
{
    float longitudbase, anchobase, altura, diagonal0, diagonal;
    printf("introduzca la longitud de la base \n");
    scanf("%f", &longitudbase);
    printf("introduzca el ancho de la base \n");
    scanf("%f", &anchobase);
    printf("introduzca la altura \n");
    scanf("%f", &altura);
    diagonal0=(longitudbase*longitudbase)+(anchobase*anchobase)+(altura*altura);
    diagonal=sqrt(diagonal0);
    printf("la diagonal del paralelepipedo es: %f", diagonal);
    return 0;
}