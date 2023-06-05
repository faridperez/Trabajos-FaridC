#include <stdio.h>

int main()
{
    int tipoauto, pap, dinero, cambio;
    printf("ingrese el tipo de auto\n1)Particular\n2)Autobus\n3)mota\n");
    scanf("%d", &tipoauto);
    switch(tipoauto){
        case 1: pap=500; puts("la tarifa es de 500");
        break;
        case 2: pap=600; puts("la tarifa es de 600");
        break;
        case 3: pap=100; puts("la tarifa es de 100");
        break;
        default: printf("opcion no valida"); return 0;
    }
    puts("introduzca el dinero: ");
    scanf ("%i", &dinero);
    cambio=dinero-pap;
    printf("tarifa: %d\n", pap);
    printf("dinero recibido: %d\n", dinero);
    printf("cambio: %d\n", cambio);
    return 0;
}