#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<stdbool.h>
int nroAleatorio();
int main()
{
    int n1, n2, entradaUser, multiplicacion;
    bool bandera;
    srand(time(NULL)); // Inicializacion del generador
    printf("Digite -1 para terminar la ejecucion\n");
    do
    {
        bandera=1;
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
            printf("Muy bien!\n");
        }
        else
        {

            while (bandera)
            {
                printf("Digite correctamente el resultado\n");
                scanf("%d", &entradaUser);
                if (entradaUser == multiplicacion)
                {
                    printf("Muy bien!\n");
                   bandera=0;
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
