#include <stdio.h>
#include <math.h>

float sumaSerie(int, int);
int exponencial(int, int);
int factorial(int);
int main()
{
    int x;
    int nTerminos;
    float sumSerie;
    printf("Ingrese el numero de entrada: ");
    scanf("%d", &x);
    printf("Ingrese el numero de terminos que tendra la serie: ");
    scanf("%d", &nTerminos);
    printf("La x: %d , y el # de terminos: %d", x, nTerminos);

    sumSerie = sumaSerie(x, nTerminos);

    printf("\n La Suma de la serie es: %f\n", sumSerie);
    return 0;
}

float sumaSerie(int x, int nTerminos)
{
    float suma = 0;
    int signo = 1;
    int exponente = 0;
    for (int i = 0; i < nTerminos; i++)
    {
        suma = suma + ((float)(signo * exponencial(x, exponente))) / ((float)factorial(exponente));
        signo = (signo * (-1));
        exponente += 2;
    }
    return suma;
}
int exponencial(int x, int y)
{
    int expo = x;
    if (y == 0)
    {
        expo = 1;
        return expo;
    }
    else
    {
        for (int i = 2; i <= y; i++)
        {
            expo = expo * x;
        }
    }
    return expo;
}
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n - 1));
    }
}