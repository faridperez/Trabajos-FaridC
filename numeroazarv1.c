#include <stdio.h>

int main()
{
    int intento, numerosecreto;
    numerosecreto=6;
    printf("ADIVINE EL NUMERO SECRETO \n");
    scanf("%i", &intento);
    if(intento==numerosecreto)
    {
        printf("correcto");
    }
    else
    {
        if(intento>numerosecreto)
        {
            printf("el numero es mayor que el #secreto");
        }
        else
        {
            printf("el numero es menor que el #secreto");
        }
    }
    return 0;
}
