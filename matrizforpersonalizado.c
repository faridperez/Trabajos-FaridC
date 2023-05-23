#include <stdio.h>
int main()
{
    /*mover el arreglo para que ingrsemos valores*/
    int t, i, tt, ii;
    printf ("introduzca el tamaño de dimension: \n");
    scanf ("%i", &tt);
    printf ("introduzca el tamaño de la otra dimension: \n");
    scanf ("%i", &ii);
    int num[tt][ii];
    for (t=0; t<tt; ++t)

        for (i=0; i<ii; ++i)

            num[t][i] = (t*ii)+i+1;

    for (t=0; t<tt; ++t){
        
          for (i=0; i<ii; ++i)
          printf("%d ", num[t][i]);
          printf("\n");
}
    return 0;
}