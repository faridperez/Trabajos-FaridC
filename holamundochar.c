#include <stdio.h>

int main(void)
{
    char palabra[]={"holamundo"};
    int i, tam=sizeof(palabra);
    
for (i=0; i<tam; i++)
    printf("%c", palabra[i]);
    
    return 0;
}
