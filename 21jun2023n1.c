#include <stdio.h>
/*

farid yael perez de gabriel

elaborar un programa que defina un arreglo de 10 elementos
que los muestre, realice la suma e identifique el mayor de ellos

21/jun/2023 ejer 1
*/
int main()
{
    int mayor=0;
    int suma;
    int arreglo[10];
    for(int i=0; i<10; i++){
       printf("Introduzca el numero %d: ", i+1); 
       scanf("%d", &arreglo[i]);
       suma+=arreglo[i];
       if(arreglo[i]>mayor){
           mayor=arreglo[i];
       }
    }
    printf("La suma es: %d\n", suma);
    printf("El numero mayor introducido es: %d", mayor);

    return 0;
}