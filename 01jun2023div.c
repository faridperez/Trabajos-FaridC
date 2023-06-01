/*farid yael perez de gabriel

01 junio de 2023

divisor o nop*/

#include <stdio.h>

int main()
{
    int dividendo, divisor, residuo, cociente;
    printf("escriba el primer numero: \n");
    scanf("%d", &dividendo);
    printf("escriba el segundo numero: \n");
    scanf("%d", &divisor);
    residuo=dividendo%divisor; cociente=dividendo/divisor;
    if(residuo!=0){
        printf("el numero %d NO es divisible entre %d\n", dividendo, divisor);
    } else{
        printf("el numero %d SI es divisible entre %d\n\n", dividendo, divisor);
        printf("dividendo: %d\ndivisor: %d\ncociente: : %d\nresiduo : %d\n", dividendo, divisor, cociente, residuo);
        printf("%d / %d = %i", dividendo,divisor, cociente);
    }
    return 0;
}
