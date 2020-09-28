#include <stdio.h>
#include <stdlib.h>

void salida();

int main()
{
    int m=0, h=0;
    printf("Ingresar el total de mujeres que se presentaron ");
    scanf("%d",&m);
    printf("Ingresar el total de hombres que se presentaron ");
    scanf("%d",&h);
    salida(m,h);
    return 0;
}
void salida(int m, int h)
{
    float ph;
    ph=h*100/(h+m);
    printf("El %.1f%c son hombres, y el %.1f%c Son mujeres.",ph,'%',100-ph,'%');
}
