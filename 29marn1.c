#include <stdio.h>

int main()
{
    int j, minumero;
    printf("cual es su numero favorito ");
    scanf("%d", &minumero);
    int numerodeiteracciones=10;
    int i;
    for (i=2;i<numerodeiteracciones; i=i+2){
    printf("iteraccion numero %d\n", i);
    
}
    printf("cualto vale aqui la variable i: %d\n", i);
    printf("cualto vale aqui la variable minumero: %d\n", minumero);
    printf("cualto vale aqui la variable numerodeiteracciones: %d\n", numerodeiteracciones);
    return 0;
}
