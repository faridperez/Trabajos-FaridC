#include <stdio.h>

int main ()
{
  int a[10]={10,1,2,-3,-100,1000,-200,7,1,0};
  int i, r=0, mayor=0, b=0;

  for (i = 0; i < 10; i++)
    {
      if (a[i]>a[mayor])
  {
    mayor = i;
  } 
  }
  printf ("\n en la posicion %d se encuentra el numero mayor: %d", mayor, a[mayor]);
  printf("\n\n\n : %i", r);

  return 0;
}
