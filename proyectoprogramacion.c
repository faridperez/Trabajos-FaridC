#include <stdio.h> 
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
 }; 
 int main() 
 { 
     struct hospitalplata datos[max]; 
     int npaciente=0, pacientev; 
     int opcion; 
     do{ 
     puts("\n----MENU DE OPCIONES----\n¿Que desea hacer?"); 
     puts("1) Agregar pacientes\n2) Visualizar pacientes\n3) Salir"); 
     scanf("%d", &opcion); 
         switch (opcion) { 
             case 1: 
                 if (npaciente<max) { 
                     puts("\n---REGISTRO DE PACIENTES---"); 
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
                     npaciente++; 
                     printf("Numero de cuarto asignado: N.%d\n", npaciente); 
                     datos[npaciente].cuarto=npaciente; 
                     printf("Registro completado\n"); 
                 } else { 
                     printf("No se pueden registrar mas pacientes\n"); 
                 } 
                 break; 
             case 2: 
                 puts("¿Que paciente desea ver?"); 
                 scanf("%d", &pacientev); 
                 if(pacientev<=npaciente){ 
                 printf("\n---REGISTRO DEL PACIENTE %d---\n", pacientev); 
                 printf("Nombre: %s\n", datos[pacientev-1].nombre); 
                 printf("Sexo: %s\n", datos[pacientev-1].sexo); 
                 printf("Numero de habitacion: N.%d\n", datos[pacientev].cuarto); 
                 printf("Edad: %i\n", datos[pacientev-1].edad); 
                 printf("Peso: %.2f\n", datos[pacientev-1].peso); 
                 printf("Altura: %.2f\n", datos[pacientev-1].altura);
                 printf("Diagnostico: %s\n", datos[pacientev-1].diagnostico);
                 printf("Medicamentos requeridos: %i\n", datos[pacientev-1].medicamentos); 
                 for(int j=0; j<datos[pacientev-1].medicamentos; j++){ 
                     printf("El medicamento %d se debe tomar cada %d hora(s)\n", j+1, datos[pacientev-1].horamedicamento[j]); 
                 } 
                 } else { 
                     puts("No existe ese paciente"); 
                 } 
             break; 
             case 3: 
             puts("\nMuchas gracias por usar la base de datos del Hospital 'Plata'"); 
             break; 
             default: 
             puts("Opcion no valida\n"); 
             break; 
         } 
     }while(opcion!=3); 
     return 0; 
 }