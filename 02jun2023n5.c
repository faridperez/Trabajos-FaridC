#include <stdio.h>
#include <math.h>
/*que hace cada linea matematicamente

primero nos pide un valor para x
si este valor es negativo hara la operacion de:
el cuadrado negativo de x menos x
esto se guarda en 'f'

si el valor es positivo se hara la operacion de:
el cuadrado negativo de x mas 3x
esto se guarda en 'f'

al final se imprime 'x' y 'f', ya con el resultado

farid yael perez de gabriel
02/jun/2023 numero 5*/


int main()
{
    float f,x;
    printf("\nelige un valor de x: ");
    scanf("%f", &x);
    
    /*seleccion del rango donde se encuentrea x*/
    
    if(x<= 0.0){
        f=-pow(x,2) -x;
    } else{
        f=-pow(x,2) +3*x;
    }
    printf ("f(%.1f) = %.3f",x,f);
    return 0;
}