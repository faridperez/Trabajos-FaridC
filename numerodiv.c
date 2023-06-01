#include <stdio.h>

int main()
{
    int num1,num2, op,op1;
    printf("escriba el primer numero: \n");
    scanf("%d", &num1);
    printf("escriba el segundo numero: \n");
    scanf("%d", &num2);
    op=num1%num2;op1=num1/num2;
    if(op!=0){
        printf("el numero %d NO es divisible entre %d\n", num1,num2);
    } else{
        printf("el numero %d SI es divisible entre %d\n\n", num1,num2);
        printf("%d / %d = %i", num1,num2, op1);
    }
    return 0;
}