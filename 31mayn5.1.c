/*farid yael perez de gabriel
31 de mayo de 2023
programa n5

operadores de incremento 2 version 2*/

#include <stdio.h>
int main ()
{
    int n=5, t/*0*/;
    t/*25*/=++n/*5*/ * --n/*5*/;
    printf("n=%d, t=%d\n", n/*5*/,t/*25*/);
    printf("%d %d %d\n",++n/*6*/,++n/*7*/,++n/*8*/);
    return 0;
}