#include <stdio.h>
#include <stdlib.h>

void frac();

int main()
{
    int num=0;
    printf("Ingrese un numero entero ");
    scanf("%d",&num);
    frac(num);
    return 0;
}
void frac(int num)
{
    printf("La octava parte de %d  es %d", num, num/8);
}
