#include <stdio.h>
/*desarrolle un programa que diga si un numero es mayor
menor o igual a 0, con la funcion 'si-anidado'


farid yael perez de gabriel
02/jun/2023 numero 6*/
int main()
{
    float numero;
    puts("Introduzca el numero:   ");
    scanf("%f", &numero);
    
    if(numero>0){
        puts("el numero es mayor a 0");
    } if (numero<0){
        puts("el numero es menor a 0");
    } if(numero==0){
        puts("el numero es igual a 0");
    }
    return 0;
}