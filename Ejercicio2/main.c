#include <stdio.h>
#include <stdlib.h>

void perimetro();
void area();

int main()
{
    int a=0, b=0;
    printf("Ingrese el largo del rectangulo ");
    scanf("%d",&a);
    printf("Ingrese la altura del rectangulo ");
    scanf("%d",&b);
    perimetro(a,b);
    area(a,b);
    return 0;
}
void perimetro(int a, int b)
{
    int p;
    p = 2*a+2*b;
    printf("El perimetro del rectangulo es: %d",p);
}
void area(int a, int b)
{
    int ar;
    ar = a*b;
    printf("\n Y el area es: %d",ar);
}
