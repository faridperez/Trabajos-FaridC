#include <stdio.h>

float area_retangulo(float b, float a);
float entrada(void);

int main()
{
    float b,h;
    printf("\nBase del rectangulo: ");
    b=entrada();
    printf("\nAltura del rectangulo: ");
    h=entrada();
    printf("\nArea del rectangulo %.2f, area ", area_retangulo(b,h));
    return 0;
}

float entrada()
{
    float m;
    do{
        scanf("%f", &m);
    } while (m<=0.0);
    return m;
}

float area_retangulo(float b, float a)
{
    return (b*a);
}