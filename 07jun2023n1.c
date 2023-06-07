#include <stdio.h>
/*
farid yael perez de gabriel

07/jun/2023

numero1
*/
int main()
{
    int digito_leido=0; //no se ha leido ningun dato
    char car;
    while(!digito_leido)
    {
        printf("introduzca un caracter: ");
        scanf("%c", &car);
        digito_leido=(('0'==car)) || (('9'==car));
    }
    return 0;
}