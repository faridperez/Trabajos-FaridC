#include <stdio.h>
/*
farid yael perez de gabriel

14/jun/2023

1.- Determinar si un numero dado leido del teclado es primo o no un numero de veces determinado repitiendo la operacion por otro
numero asignado por teclado
*/
int main()
{
    int numerorep, veces=0, numerop;
    float residuo1, residuo2, residuo3;
    int flag1=0, flag2=0;
    printf("cuantos numeros primos desea conocer? ");
    scanf("%d", &numerorep);
    do{
        veces++;
        printf("ingrese el numero\n");
        scanf("%d", &numerop);
        residuo1=numerop%2;
        residuo2=numerop%3;
        residuo3=numerop%5;
        flag1=(numerop==1 || numerop==2 || numerop==3);
        flag2=((residuo1==0) || (residuo2==0) || (residuo3==0));
        if (flag1==1){
            printf("SI es primo\n\n");
        } else {
            if (flag2==1){
            printf("NO es primo\n\n");
        } else{
            printf("SI es primo\n\n");
        }
        }
    }while (veces<=numerorep);
    return 0;
}