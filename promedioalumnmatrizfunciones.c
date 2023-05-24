#include <stdio.h>

float calculos(int alum, int i, int j, int calif[5][5], float prom[5], float suma, float mat){
        for (i = 0; i < alum; ++i) {
        suma=0;
        printf("ingrese las calificaciones del alumno %i\n", i+1);
        for (j = 0; j < mat; ++j) {
            printf("calificación %i: ", j+1);
            scanf("%i", &calif[i][j]);
            suma=suma+calif[i][j];
        }
        prom[i]=suma/mat;
    }
}


float resultados(float prom[5], int alum, int i){
    for (i = 0; i < alum; ++i) {
    printf("promedio del alumno %d: %.2f\n", i+1, prom[i]);
    }
}

int main() {
    int alum, i, j;
    int calif[5][5];
    float prom[5];
    float suma, mat;
    alum=5;
    mat=5;
    calculos(alum, i, j, calif, prom,suma,mat);
    resultados(prom, alum, i);
    return 0;
}