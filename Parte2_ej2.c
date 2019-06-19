#include <stdio.h>
#include <math.h>

int exponencial (int x, int y){
    int expo=x;
    if(y==0){
        expo=1;
        return expo;
    }else{
        for(int i=2; i<=y; i++){
            expo= expo*x;
        }
    }
    return expo;
}

int sumaGeometrica(int x, int n){
    int suma=0;
    int elevado;
    int i;

    for(i=0; i<=n ; i++){
        elevado= exponencial(x,i);
        suma=suma+elevado;
    }
    return suma;
}

int main()
{
    int base;
    int potencia;
    int sumGeo;
 printf("Ingrese el numero base: ");
 scanf("%d",&base);
 printf("Ingrese el numero 'n' hasta el que llegará la potencia: ");
 scanf("%d",&potencia);
 printf("La base: %d , y la potencia: %d",base,potencia);

 sumGeo= sumaGeometrica(base,potencia);

 printf("\n La Suma Geometrica es: %d\n",sumGeo);
  return 0;
}
