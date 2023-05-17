#include <stdio.h>
#include <math.h>
int main()
{
    float altura, base, diagonal0, diagonal;
    printf("introduza la altura del rectangulo \n");
    scanf("%f", &altura);
    printf("introduza la base del rectangulo \n");
    scanf("%f", &base);
    diagonal0=(altura*altura) + (base*base);
    diagonal= sqrt(diagonal0);
    printf("la diagonal es: %f", diagonal);
    return 0;
}
