#include <stdio.h>

int main()
{
    int ventas=5000, anos=8, sal_min=100,iva=15;
    
    if(ventas<sal_min*3 && anos>>10*iva){ //jerarquia: 1.-Aritmeticos; 2.-Relacionales; 3.-Logicos
        printf("verdad");
    } else {
        printf("falso");
    }
    return 0;
}
