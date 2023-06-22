#include <stdio.h> 
#include <stdlib.h>
#include <time.h> //para los numeros aleatorios
#include <string.h> //para el meridiano
#define max 50 
/* 
Farid Yael Perez De Gabriel 

Proyecto 

2BMPG 
*/ 
struct hospitalplata{ 
    char nombre[20]; 
    char sexo[10];
    char diagnostico[20];
    int edad, cuarto, medicamentos, horamedicamento[10]; 
    float peso, altura;
    int bajaoalta;
    float imc;
 }; 
 int main() 
 { 
    struct hospitalplata datos[max]; 
    int npaciente=0, pacientev; 
    int opcion;
    int cuarto0;
    char meridiano[3];
    srand(time(NULL));
    int hora = (rand() % 24)+1;
    do{
    printf("Hora actual: %d:00 hrs\n", hora);
    puts("\n****MENU DE OPCIONES****\n¿Que desea hacer?"); 
    puts("1) Agregar pacientes\n2) Visualizar pacientes\n3) Dar de baja/alta un paciente\n4) Salir"); 
    scanf("%d", &opcion); 
        switch (opcion) { 
        case 1: 
        if (npaciente<max) { 
            puts("\n***REGISTRO DE PACIENTES***"); 
            printf("Nombre: "); 
            scanf("%s", datos[npaciente].nombre); 
            printf("Sexo (Masculino/Femenino): "); 
            scanf("%s", datos[npaciente].sexo); 
            printf("Edad: "); 
            scanf("%i", &datos[npaciente].edad); 
            printf("Peso: "); 
            scanf("%f", &datos[npaciente].peso); 
            printf("Altura: ");
            scanf("%f", &datos[npaciente].altura);
            printf("Diagnóstico: ");
            scanf("%s", datos[npaciente].diagnostico);
            printf("Medicamentos requeridos: "); 
            scanf("%i", &datos[npaciente].medicamentos); 
            for(int j=0; j<datos[npaciente].medicamentos; j++){ 
                printf("Intervalo de horas entre cada dosis del medicamento %d: ", j+1); 
                scanf("%d", &datos[npaciente].horamedicamento[j]); 
            }
            int cuarto0 = (rand() % 50)+1;
            datos[npaciente].imc=((datos[npaciente].peso)/((datos[npaciente].altura)*(datos[npaciente].altura)));
            datos[npaciente].cuarto=cuarto0;
            npaciente++;
            printf("Numero de paciente asignado: N.%d\n", npaciente);
            printf("Numero de cuarto asignado: N.%d\n", datos[npaciente-1].cuarto); 
            printf("\nRegistro completado\n"); 
            } else { 
                printf("No se pueden registrar mas pacientes\n"); 
            } 
            break; 
            case 2:
            if(npaciente==0){
                puts("\nNo hay pacientes que revisar");
            } else{
            puts("¿Que paciente desea ver?"); 
            scanf("%d", &pacientev); 
            if(datos[pacientev-1].bajaoalta==1){
                puts("\nEste paciente fue dado de baja");
            } else if(datos[pacientev-1].bajaoalta==2){
                puts("\nEste paciente fue dado de alta");
            }else{
            if(pacientev<=npaciente){
            printf("\n***REGISTRO DEL PACIENTE %d***\n", pacientev); 
            printf("Nombre: %s\n", datos[pacientev-1].nombre); 
            printf("Sexo: %s\n", datos[pacientev-1].sexo); 
            printf("Numero de habitacion: N.%d\n", datos[pacientev-1].cuarto); 
            printf("Edad: %i\n", datos[pacientev-1].edad); 
            printf("Peso: %.2f\n", datos[pacientev-1].peso); 
            printf("Altura: %.2f\n", datos[pacientev-1].altura);
            printf("Indice de masa corporal: %.2f\n", datos[pacientev-1].imc);
            printf("Rango de imc: ");
            if (datos[pacientev-1].imc < 18.5) {
            printf("Bajo peso");
            } else if (datos[pacientev-1].imc >= 18.5 && datos[pacientev-1].imc < 25.0) {
                printf("Peso normal");
            } else if (datos[pacientev-1].imc >= 25.0 && datos[pacientev-1].imc < 30.0) {
                printf("Sobrepeso");
            } else if (datos[pacientev-1].imc >= 30.0 && datos[pacientev-1].imc < 35.0) {
                printf("Obesidad clase 1");
            } else if (datos[pacientev-1].imc >= 35.0 && datos[pacientev-1].imc < 40.0) {
                printf("Obesidad clase 2");
            } else {
                printf("Obesidad clase 3");
            }
            printf("\nDiagnostico: %s\n", datos[pacientev-1].diagnostico);
            printf("Medicamentos requeridos: %i\n", datos[pacientev-1].medicamentos); 
            for(int j=0; j<datos[pacientev-1].medicamentos; j++){
                int horasigmedicamento;
                horasigmedicamento=(datos[pacientev-1].horamedicamento[j]+hora);
                if(horasigmedicamento>24){
                    horasigmedicamento=horasigmedicamento-24;
                }
                printf("El medicamento %d se debe tomar a las %d:00 hrs\n", j+1, horasigmedicamento); 
            }
            } else { 
                puts("No existe ese paciente"); 
            } 
            break; 
            case 3:
            int npacienteboa;
            puts("\n***GESTION DE ALTAS Y BAJAS***\n");
            printf("Seleccione el paciente numero: ");
            scanf("%d", &npacienteboa);
            puts("Presione\n1) Dar de baja\n2) Dar de alta");
            scanf("%d", &datos[npacienteboa-1].bajaoalta);
            puts("\nGestion completada");
            break;
            case 4: 
            puts("\nMuchas gracias por usar la base de datos del Hospital 'Plata'"); 
            break;
            default: 
            puts("Opcion no valida\n"); 
            break; 
        } 
        }
        }
    }while(opcion!=4); 
    return 0; 
}
