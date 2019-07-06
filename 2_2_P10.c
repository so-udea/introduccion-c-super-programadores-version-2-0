#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int nroAleatorio();
int nroAleatorioMensajes();
void mensajePositivo(int);
void mensajeNegativo(int);
int main()
{
    int n1, n2, entradaUser, multiplicacion;
    bool bandera;
    srand(time(NULL)); // Inicializacion del generador
    printf("Digite -1 para terminar la ejecucion\n");
    do
    {
        bandera = 1;
        n1 = nroAleatorio();
        n2 = nroAleatorio();
        multiplicacion = n1 * n2;
        printf("Cuanto es %d veces %d?.\n", n1, n2);
        scanf("%d", &entradaUser);
        if (entradaUser < 0)
        {
            exit(-1);
        }
        else if (entradaUser == multiplicacion)
        {
            mensajePositivo(nroAleatorioMensajes());
        }
        else
        {

            while (bandera)
            {
                mensajeNegativo(nroAleatorioMensajes());
                scanf("%d", &entradaUser);
                if (entradaUser == multiplicacion)
                {
                    mensajePositivo(nroAleatorioMensajes());
                    bandera = 0;
                }

                if (entradaUser <= 0)
                {
                    printf("Fin del programa.....");
                    exit(-1);
                }
            }
        }

    } while (entradaUser >= 0);
    return 0;
}

int nroAleatorio()
{
    int aleatorio;
    aleatorio = rand() % 10; //Genera un numero entre 0 y 9
    //printf("%d \n",aleatorio);
    return aleatorio;
}
int nroAleatorioMensajes()
{
    int aleatorio;
    aleatorio = rand() % 4;
    return aleatorio;
}
void mensajePositivo(int n)
{
    switch (n)
    {
    case 0:
        printf("Muy bien!\n");
        break;
    case 1:
        printf("Excelente!\n");
        break;
    case 2:
        printf("Buen trabajo!\n");
        break;
    case 3:
        printf("Sigue haciéndolo bien!\n");
        break;
    default:
        printf("n fuera de rango\n");
        break;
    }
}
void mensajeNegativo(int n)
{
    switch (n)
    {
    case 0:
        printf("No. Por favor trata de nuevo.\n");
        break;
    case 1:
        printf("Incorrecto. Trata una vez más.\n");
        break;
    case 2:
        printf("No te rindas!\n");
        break;
    case 3:
        printf("No. Trata de nuevo\n");
        break;
    default:
        printf("n fuera de rango\n");
        break;
    }
}