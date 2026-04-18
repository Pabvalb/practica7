#include <stdio.h>
int main() 
{
    enum boolean {NO, YES};
    enum boolean valorBooleano; 
    valorBooleano = YES;
    printf("%d\n", valorBooleano);
    enum diasSemana {LUNES, MARTES, MIERCOLES=5, JUEVES, VIERNES}; 
    printf("\n%d", LUNES);
    printf("\n%i", MARTES);
    printf("\n%d", MIERCOLES);
    printf("\n%i", JUEVES);
    printf("\n%d\n", VIERNES);
    return 0;
}
