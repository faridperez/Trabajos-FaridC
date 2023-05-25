#include <stdio.h>

int local(int resultado, int numero1, int numero2){
    printf("introduzca el primer numero\n");
    scanf("%i", &numero1);
    printf("introduzca el segundo numero\n");
    scanf("%i", &numero2);
    resultado=numero1+numero2;
    printf("la suma es: %i", resultado);
}

int main() {
    int resultado, numero1;
    local(resultado, numero1, numero2);
    return 0;
}