#include <stdio.h> 
/*
Farid Yael Pérez De Gabriel
*/
 int main() 
 { 
    int const centinela=-1;
    int suma, cuenta, nota;
    printf("introduzca la primera nota: ");
    scanf("%d", &nota);
    while(nota!=centinela)
    {
        cuenta++;
        suma += nota;
        printf("introduzca la siguiente nota: ");
        scanf("%d", &nota);
    } //fin de while
    return 0; 
 }