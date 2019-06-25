#include <stdio.h>
int largo_cadena(char[]);
void numeroReversa();
int main()
{
    numeroReversa();
}

void numeroReversa()
{
   
    int largo;
    char numero[250];
    printf("Ingrese el numero el cual desea ver en reversa: ");
    scanf("%s", &numero);
    printf("\nEl numero que ha escrito es: %s\n", numero);
      
    largo = largo_cadena(numero);
    printf("\nel largo de la cadena es: %d",largo);
    printf("\nEl numero en reversa es: ");
    while (largo >= 0)
    {
        printf("%c", numero[largo]);
        largo--;
    }
}
int largo_cadena(char cadena[])
{
    int largo = 0;
    while (cadena[largo] != '\0')
    {
        largo++;
    }
    return largo;
}