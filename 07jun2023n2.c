#include <stdio.h>
/*
farid yael perez de gabriel

07/jun/2023

numero2
*/
int main()
{
    float num, media, acum;
    int cont=0;
    
    while(cont<6)
    {
        ++cont;
        scanf("%f", &num);
        acum+=num;
    }
    media=acum/cont;
    printf("media = %2.f", media);
    return 0;
}
