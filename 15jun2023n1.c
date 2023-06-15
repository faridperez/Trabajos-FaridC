#include <stdio.h>
#include <stdarg.h>

void maximo(int n, ...);

int main()
{
    puts("\t\tPRIMERA BUSQUEDA DEL MAXIMO\n");
    maximo(6,3.0,4.0,-12.5,1.2,4.5,6.4);
    puts("\t\tNUEVA BUSQUEDA DEL MAXIMO\n");
    maximo(4,55.4,17.8,5.9,-17.99);
    return 0;
}

void maximo(int n, ...)
{
    double mx, actual;
    va_list puntero;
    int i;
    va_start(puntero, n);
    mx = actual = va_arg(puntero, double);
    printf("\n\tArgumento actual: %.2lf\n", actual);
    for (i=2; i<=n; i++)
    {
        actual=va_arg(puntero, double);
        printf("\n\tArgumento actual: %.1lf\n", actual);
        if (actual>mx)
        {
            mx=actual;
        }
        va_end(puntero);
        printf("\n\tMaximo de la lista de %d numeros: %.2lf\n", n, mx);
    }
}