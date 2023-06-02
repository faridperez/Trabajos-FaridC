#include <stdio.h>
/*desarrolle un programa que diga si un numero es mayor
menor o igual a 0, con la funcion 'si-simple'


farid yael perez de gabriel
02/jun/2023 numero 2*/
int main()
{
    float numero;
    printf("Introduzca el numero:   ");
    scanf("%f", &numero);
    
    if(numero==0){
        printf("el numero es igual a 0\n");
        puts("el numero es igual a 0");
    }
    
    if(numero>0){
        printf("el numero es mayor a 0\n");
        puts("el numero es mayor a 0");
    }
    
    if(numero<0){
        printf("el numero es menor a 0\n");
        puts("el numero es menor a 0");
    }
    return 0;
}