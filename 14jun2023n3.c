#include <stdio.h>
/*
farid yael perez de gabriel

14/jun/2023

3.- Calcular la suma de una serie de numeros leidos por telcado hasta que numero sea igual a '-1'
*/
int main()
{
    int numero, suma;
    while (numero>=0){
    printf("introduzca el numero: ");
    scanf("%d", &numero);
    suma+=numero;
    }
    printf("la suma de todos los numeros hasta ahora es: %d",suma+1);
    return 0;
}