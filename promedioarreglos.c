#include <stdio.h>

int main()
{
    float c[5];
    
    float r=0.0;
    
    printf("depurar este programa \n");
    
    for (int i=0; i<5; i++){
        printf("escanear numero %d\n", i+1);
        scanf("%f", &c[i]);
        r+=c[i];
    }

    printf("promedio: %.2f\n", r/5);
    return 0;
}
