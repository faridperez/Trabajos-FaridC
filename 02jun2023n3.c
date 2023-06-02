#include <stdio.h>
/*divisible o nop con 'if-else'


farid yael perez de gabriel
02/jun/2023 numero 3*/


int main()
{
    int dividendo, divisor, residuo, cociente;
    puts("escriba el primer numero:");
    scanf("%d", &dividendo);
    puts("escriba el segundo numero:");
    scanf("%d", &divisor);
    residuo=dividendo%divisor; cociente=dividendo/divisor;
    if(residuo!=0){
        puts("el numero 1 NO es divisible entre el 2");
    } else{
        puts("el numero 1 SI es divisible entre el 2");
    }
    return 0;
}
