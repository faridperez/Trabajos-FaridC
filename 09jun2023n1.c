#include <stdio.h>
/*
farid yael perez de gabriel

09/jun/2023

numero1
*/
int main()
{
    long int n, m, fact;
    
    do{
        printf("\nel factorial n entre 2 y 20: ");
        scanf("%ld", &n);
    } while((n<2) || (n>20));
    
    for (m=n, fact=1;n>1;fact*= n--)
    {
        printf("%ld! = %ld", m, fact);
    }
    return 0;
}