#include <stdio.h>
/*desarrolle un programa que diga si un numero es mayor
menor o igual a 0, con la funcion 'si-anidado'
y de un decremento o incremento


farid yael perez de gabriel
02/jun/2023 numero 7*/
int main()
{
    float numero;
    puts("Introduzca el numero:   ");
    scanf("%f", &numero);
    
    if(numero>0){
        puts("el numero es mayor a 0");
        ++numero;
    } if (numero<0){
        puts("el numero es menor a 0");
        --numero;
    } if(numero==0){
        puts("el numero es igual a 0");
        numero+=10;
    }
    printf("%.1f", numero);
    return 0;
}