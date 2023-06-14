#include <stdio.h>
/*
farid yael perez de gabriel

14/jun/2023

sumar 3 numeros reales
*/

float suma()
{
    int num_elementos=3, indice;
    float total=0.0;
    printf("\n\t introduce %d numero reales \n", num_elementos);
    for (indice=0; indice<num_elementos; indice++)
    {
        float x;
        scanf("%f", &x);
        total+=x;
    }
    
    printf("%2.f", total);
    return total;
}
int main()
{
    suma();
    
    return 0;
}