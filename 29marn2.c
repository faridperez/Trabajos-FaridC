#include <stdio.h>

int main()
{
    const int luna=238857;
    float luna_kilo;
    printf("distancia a la luna %d millas\n", luna);
    luna_kilo=luna*1.609;
    printf("en kilometros es %.2fkm  \n", luna_kilo);
    return 0;
}
