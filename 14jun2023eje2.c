#include <stdio.h>

void func1(void)
{
    puts("primer funcion");
    return;
}

void func2(void)
{
    puts("segunda funcion");
    return;
}

void func3(void)
{
    puts("tercer funcion");
    return;
}


int main()
{
    func1();
    func2();
    func3();
    return 0;
}