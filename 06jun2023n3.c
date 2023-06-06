#include <stdio.h> 
  
 int main() 
 { 
    int contador = 0;
    while(contador<5)
    {
    contador++;
    printf("contador: %d \n", contador);
    }
    printf("terminado.contador: %d\n", contador);
    return 0; 
 }