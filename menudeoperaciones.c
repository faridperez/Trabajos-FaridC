#include <stdio.h>

int main()
{
    int opcion, reiniciar;
    float numerouno, numerodos, suma, resta, mult, divi;
    reiniciar=1;
    while(reiniciar<=1){
	printf("Bienvenido al menu de operaciones \n");
    printf("¿Que desea hacer? \n");
    printf("(1)Para sumar  (2)Para restar   (3)Para multiplicar   (4)Para dividir \n");
    scanf ("%i", &opcion);
    printf("Introduzca el primer numero \n");
    scanf("%f", &numerouno);
    printf("Introduzca el segundo numero \n");
    scanf("%f", &numerodos);
    switch(opcion) {
        case 1:
        suma=numerouno+numerodos;
        printf("la suma de %f y %f es: %f\n", numerouno, numerodos, suma);
        break;
        case 2:
        resta=numerouno-numerodos;
        printf("la resta de %f y %f es: %f\n", numerouno, numerodos, resta);
        break;
        case 3:
        mult=numerouno*numerodos;
        printf("la multiplicacion de %f y %f es: %f\n", numerouno, numerodos, mult);
        break;
        case 4:
        divi=numerouno/numerodos;
        printf("la division de %f y %f es: %f\n", numerouno, numerodos, divi);
        break;
    }
    printf("desea comenzar de nuevo?\n");
    printf("(1)SI   (2)NO\n");
    scanf("%i", &reiniciar);
    }
    return 0;
}
