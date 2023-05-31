/*farid yael perez de gabriel
31 de mayo de 2023
programa n5

*/

#include <stdio.h>
int
main ()
{
    int n=5, t;
    t=++n * --n;
    printf("n=%d, t=%d\n", n,t);
    printf("%d %d %d\n",++n,++n,++n);
    return 0;
}