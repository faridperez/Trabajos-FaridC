#include <stdio.h>

void f(int p, float q)
    {
        printf("Al entrar en f, p (=entero) vale %d y q (=real) vale %6.2f\n", p,q); //se asignan los valores a estas variables
        
        p = 7777;
        q = 12345.67; //se cambia el valor temporalmente, estos valores seran sustituidas mientras estemos en 'f'
        
        printf("Al salir de f, p vale %d y q vale %6.2f\n", p, q); //imprime el valor actual(temporales)
        return; //regresamos a laverga pa
    }

int main()
{
    int entero;
    float real;
    
    entero=22;
    real=33.3;
    
    printf("Antes de llamar a f entero vale %d y real vale %6.2f\n", entero, real); //se declara el valor de las variables en main
    f(entero, real); //se llama a la funcion 'f'
    printf("Despues de volver a f, entero vale %d y real vale %6.2f\n", entero, real); /*se imprime el valor de inicio 
                                                                                         el valor anterior fue temporal, entonces
                                                                                         muestra los valores dentro de main*/
    return 0;
}