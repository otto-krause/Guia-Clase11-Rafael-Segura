#include <stdio.h>
#include <stdlib.h>

void numeros();

int main()
{
    int a=0, b=0;
    printf("Ingresa el primer numero ");
    scanf("%d",&a);
    printf("Ingresa el segundo numero ");
    scanf("%d",&b);
    numeros(a,b);
    return 0;
}
void numeros(int a, int b)
{
    if (a!=b){
        if (a>b)
            printf("%d es mayor que %d",a,b);
        else
            printf("%d es mayor que %d",b,a);
    }
    else
        printf("Los numeros son iguales");
}
