#include <stdio.h>
#include <stdlib.h>

int r1=0, r2=0, r3=0, r4=0, r5=0, rt=0;
void total();

int main()
{
    printf("Ingresar los valores de las 5 resistsencias: ");
    scanf("%d %d %d %d %d", &r1, &r2, &r3, &r4, &r5);
    total();
    return 0;
}
void total()
{
    rt = r1+r2+r3+r4+r5;
    printf("La suma de las resistencias: \n%d \n%d \n%d \n%d \n%d",r1,r2,r3,r4,r5);
    printf(" \n Es: %d",rt);
}
