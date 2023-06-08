#include <stdio.h>
/*
farid yael perez de gabriel

07/jun/2023

tarea ejercicio 1 'do-while' 
*/
int main()
{
    int numero, contador=0, suma;
    do
    {
        contador++;
        printf("introduzca el numero %d: ",contador);
        scanf("%i", &numero);
        suma+=numero;
    } while(contador<=4);
    printf("\nla suma de los 5 numeros es: %d", suma);
    return 0;
}