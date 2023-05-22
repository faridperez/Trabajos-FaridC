#include <stdio.h>

int main()
{
    int intento, numerosecreto;
    numerosecreto=6;
    printf("ADIVINE EL NUMERO SRECRETO \n");
    scanf("%i", &intento);
    if(intento==numerosecreto)
    {
        printf("correcto");
    }
    else
    {
        printf("incorrecto");
    }
    return 0;
}
