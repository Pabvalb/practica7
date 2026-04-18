#include<stdio.h>
int main()
{
    if (0)
    {
        printf("Esta instrucción nunca se ejecuta\n");
        printf("porque la condición siempre es falsa (0).\n"); 
    }
    if (-38) 
        printf("Esta instrucción siempre se ejecuta.\n"); 
    return 0;
}
