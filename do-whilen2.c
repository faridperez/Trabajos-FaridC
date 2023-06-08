#include <stdio.h>
/*
farid yael perez de gabriel

07/jun/2023

tarea ejercicio 2 'do-while' 
*/
int main() {
    int numero;
    
    printf("ingrese un numero para hacer una contador descendente\n");
    scanf("%d", &numero);

    do{
        numero--;
        printf("%d\n", numero);
    }while(numero!=0);

    return 0;
}