#include <stdio.h>
/*calcular el mayor de 2 numeros leidos desde el teclado
y visualizarlos utilizando el 'si-simple'


farid yael perez de gabriel
02/jun/2023 numero 4*/


int main()
{
    float numero1, numero2;
    puts("escriba el numero 1");
    scanf("%f", &numero1);
    puts("escriba el numero 2");
    scanf("%f", &numero2);
    
    if(numero1>numero2){
        puts("el numero 1 es mayor");
    }
    
    if(numero1<numero2){
        puts("el numero 2 es mayor");
    }
    return 0;
}