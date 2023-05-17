#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main()
{
    float radio, numerolados, grados, lado0, lado,perimetro;
    printf ("PERIMETRO DE UN POLIGONO \n");
    printf("introduzca el radio del poligono \n");
    scanf("%f", &radio);
    printf("introduzca los lados del poligono \n");
    scanf("%f", &numerolados);
    perimetro=radio*numerolados*2*sin(PI/numerolados); //2*radio*numerolados*sin(PI/numerolados)
    printf ("el perimetro es de: %f", (perimetro));
    return 0;
}
