#include <stdio.h>
/*visualizar la tarifa de luz segun el gasto de corriente electrica
para un gasto menor a 1000 es 1.2 pesos entre 1000 y 1850 1.8
mayor a 1850 el precio es a 2.1 (medir en kilowatts por hora vale 1.2 pesos)

fari yael perez de gabriel
01 de junio de 2023     act1 version2*/
int main()
{  
    int kwh, consumoactual, consumoanterior, consumo;
    float pph, tap;
    printf("introduzca los kilowatts-hora: ");
    scanf("%i", &kwh);
    if(kwh<1000){
        printf("con los %i kilowatts-hora usted pagara $1.2 por hora \n\n", kwh); pph=1.2;
    } else{
        if(kwh>1000 && kwh<1850){
            printf("con los %i kilowatts-hora usted pagara $1.8 por hora \n\n", kwh); pph=1.8;
        }
    }
    if(kwh>1850){
        printf("con los %i kilowatts-hora usted pagara $2.1 por hora \n\n", kwh); pph=2.1;
    }
    printf("introduzca el consumo actual: \n");
    scanf("%i", &consumoactual);
    printf("introduzca el consumo anterior: \n");
    scanf("%i", &consumoanterior);
    if(consumoactual<consumoanterior){
        printf("ERROR \n EL CONSUMO ANTERIOR NO PUEDE SER MAYOR");
    } else{
        consumo=consumoactual-consumoanterior;
        tap=(consumo)*(pph);
        printf("usted consumio %i kilowatts \n", consumo);
        printf("el precio total a pagar es: $%f", tap);
    }
    return 0;
}