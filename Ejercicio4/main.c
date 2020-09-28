#include <stdio.h>
#include <stdlib.h>

void salida();

int main()
{
    int F=0, S=0;
    printf("Ingresar la fuerza ");
    scanf("%d",&F);
    printf("Ingresar la superficie ");
    scanf("%d",&S);
    salida(F,S);
    return 0;
}
void salida(int F,int S)
{
    float P;
    P = F/S;
    printf("La presion es: %.1f",P);
}
