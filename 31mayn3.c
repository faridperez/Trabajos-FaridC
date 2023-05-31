/*farid yael perez de gabriel
31 de mayo de 2023
programa n3

test de operadores '++'' y '--'*/

#include <stdio.h>
int
main ()
{
    int m=45, n=75;
    printf("m=%d, n=%d, \n", m,n);
    ++m;
    --n;
    printf("m=%d, n=%d, \n", m,n);
    m++;
    n--;
    printf("m=%d, n=%d, \n", m,n);
    return 0;
}