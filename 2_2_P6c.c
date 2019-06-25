#include <stdio.h>

int discriminante(int, int, int);

int main()
{
    int a, b, c,d;
    printf("Ingrese los valores para los coeficientes a,b y c respectivamente:\n");
    scanf("%d%d%d", &a,&b,&c);
    d= discriminante(a,b,c);
    if(d==-1){
        printf("La ecuación cuadrática tiene como solución dos raíces complejas conjugadas");
    }else if (d==0)
    {
        printf("La ecuación cuadrática tiene dos raíces reales iguales");
    }else
    {
        printf("La ecuación cuadrática tiene como solución dos raíces reales y distintas");
    }      
    return 0;
}

int discriminante(int a, int b, int c)
{
    int d;
    d = ((b * b) - (4 * a * c));
    if (d < 0)
    {
        return -1;
    }
    else if (d == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }

    {
    }
}