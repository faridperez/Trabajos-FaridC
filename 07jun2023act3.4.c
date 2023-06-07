#include <stdio.h>
#define MAX 25
/*
farid yael perez de gabriel

07/jun/2023

actividad 3.4
*/
int main()
{
    int i,j;
    for(i=0, j=MAX;i<j;i++, j--)
    {
        printf("%d ", (i+2*j));
    }

    return 0;
}
