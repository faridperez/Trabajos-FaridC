/*farid yael perez de gabriel
31 de mayo de 2023
programa n4

diferencia de operadores de incremento y postincremento*/

#include <stdio.h>
int
main ()
{
    int m=99, n;
    n=++m;
    printf("m=%d, n=%d, \n", m,n);
    n= ++m;
    printf("m=%d, n=%d\n", m,n);
    printf("m=%d\n", m++);
    printf("m=%d\n", ++m);
    return 0;
}