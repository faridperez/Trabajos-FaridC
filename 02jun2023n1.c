#include <stdio.h>
/*desarrollar un programa que solicite una calificacion entre 1-10
y evalue si es mayor a 6 mande un mensaje de aprobado
usar la funcion 'puts' y 'printf'

farid yael perez de gabriel
02/jun/2023 numero 1*/
int main()
{
    float calificacion;
    printf("Introduzca la calificacion:    ");
    scanf("%f", &calificacion);
    if(calificacion>=6){
        printf("APROBADO\n");
        puts("APROBADO");
    }
    return 0;
}
