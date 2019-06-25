#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int nroAleatorio(int, int);
int main()
{
    int N, M, cant, i, aleatorio;
    printf("Digite la cantidad de números que desea generar: ");
    scanf("%d", &cant);
    printf("Digite los limites (primero el superior, luego el inferior): ");
    scanf("%d%d", &N, &M);
    srand(time(NULL)); // Inicializacion del generador
    for (i = 0; i < cant; i++)
    {
        aleatorio = nroAleatorio(N, M);
        printf("%d ", aleatorio);
    }
    printf("\n", aleatorio);
    system("PAUSE");
    return 0;
}
int nroAleatorio(int nroSuperior, int nroInferior)
{
    int aleatorio;
    aleatorio = rand() % (nroSuperior - nroInferior + 1) + nroInferior; //Genera un numero entre M y N
    return aleatorio;
}