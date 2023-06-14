#include <stdio.h>
/*
farid yael perez de gabriel

14/jun/2023

cuadrado con funcion
*/
int cuadrado()
{
    int n, q;
    while(q<=1000)
    {
        q=n*n;
        printf("el cuadrado de %d es: %d \n", n, q);
        n++;
    }
    return 0;
}
int main()
{
    cuadrado();
    return 0;
}