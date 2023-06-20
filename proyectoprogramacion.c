#include <stdio.h>

int main()
{
    int numeropacientes;
    printf("Bienvenido al hospital 'Plata'\n\n");
    printf("Con cuantos pacientes desea trabajar? ");
    scanf("%d", &numeropacientes);
    
    int habitacion[numeropacientes], edad[numeropacientes], npaciente, numeromedicamentos[numeropacientes];
    float peso[numeropacientes];
    
    for (int npaciente = 0; npaciente < numeropacientes; npaciente++)
    {
        printf("\nPACIENTE %d\n", npaciente + 1);
        printf("Numero de habitacion: ");
        scanf("%d", &habitacion[npaciente]);
        printf("Edad: ");
        scanf("%d", &edad[npaciente]);
        printf("Peso: ");
        scanf("%f", &peso[npaciente]);
        printf("Medicamentos requeridos: ");
        scanf("%d", &numeromedicamentos[npaciente]);
        int l,horamedicamento[npaciente][l];
        for(l=1; l<=numeromedicamentos[npaciente]; l++)
        {
            printf("Hora del medicamento %d: ", l);
            scanf("%d", &horamedicamento[npaciente][l]);
        }
    }
    puts("\nMOSTRAR DATOS");
    for(int i = 0, horamedicamento[i][numeropacientes]; i < numeropacientes; i++)
    {
        printf("\nPACIENTE %d\n", i + 1);
        printf("Numero de habitacion: %d\n", habitacion[i]);
        printf("Edad: %d\n", edad[i]);
        printf("Peso: %f\n", peso[i]);
        printf("Medicamentos requeridos: %d\n", numeromedicamentos[i]);
        int l, horamedicamento[i][l];
        for(l=1; l <= numeromedicamentos[i]; l++)
        {
            printf("Hora del medicamento %d: %d\n", l, horamedicamento[i][l]);
        }
    }
    
    return 0;
}