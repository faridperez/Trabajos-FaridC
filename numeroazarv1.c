#include <stdio.h>

int main()
{
    int intento, numerosecreto, opcion;
    numerosecreto=6;
    do{
    printf("ADIVINE EL NUMERO SECRETO \n");
    scanf("%i", &intento);
    if(intento==numerosecreto)
    {
        printf("correcto");
        opcion=2;
    }
    else
    {
        if(intento>numerosecreto)
        {
            printf("el numero es mayor que el #secreto");
        }
        else
        {
            printf("incorrecto \n");
            printf("el numero es menor que el #secreto \n");
        }
            printf("¿desea intentar de nuevo? \n");
            printf("1)SI    2)NO \n");
            scanf("%i", &opcion);
    }
    }while(opcion!=2);
    return 0;
}
