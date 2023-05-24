#include <stdio.h>

int main() {
    int alum, i, j;
    int calif[5][5];
    float prom[5];
    float suma, mat;
    alum=5;
    mat=5;
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
    for (i = 0; i < alum; ++i) {
        printf("promedio del alumno %d: %.2f\n", i+1, prom[i]);
    }
    return 0;
}