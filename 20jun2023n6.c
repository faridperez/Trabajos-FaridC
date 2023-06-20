#include <stdio.h>

int main()
{
    int numeros[6]={1,20,30,40,50};
    int n[]={3,4,5};
    char c[]={'L','u','i','s'};
    char d[]={"puesta de sol"};
    
    for(int i=0; i<6; i++){
    printf ("%i ",numeros[i]);
    }
    printf("\n");
    for(int i=0; i<3; i++){
    printf ("%i ",n[i]);
    }
    for(int i=0; i<4; i++){
    printf ("%c ",c[i]);
    }
    printf("\n");
    for(int i=0; i<14; i++){
    printf ("%c",d[i]);
    }
    return 0;
}