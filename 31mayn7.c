/*farid yael perez de gabriel
31 de mayo de 2023
programa n7

operador '?' en numero azar*/

#include <stdio.h>

int main()
{
    int intento, numerosecreto=6;
    printf("ADIVINE EL NUMERO SRECRETO \n");
    scanf("%i", &intento);
    if((intento==numerosecreto)?(printf("correcto")):(printf("incorrecto")))
    return 0;
}