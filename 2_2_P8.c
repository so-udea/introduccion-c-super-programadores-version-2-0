#include <stdio.h>
#include <time.h>
#include <ctype.h>
void lanzada(int x);
time_t t;
int main()
{
    int tiros;
    printf(" Ingrese el numero de tiros: ");
    scanf("%d",&tiros);  
    lanzada(tiros);
    return 0;
}
void lanzada(int x){
    int i,ale,lado,contc=0,conts=0;
    srand((unsigned) time(&t));
    /*int m=0;
    int n=1;*/
    printf(" La secuencia es : ");
    for(i=1;i<=x;i++){
        ale = rand()%2;
        if(ale==0){//cara
            printf("C");
            contc++;
        }
        else{//sello
            printf("S");
            conts++;
        }
    }
    printf("\n Numero de veces que cayo cara: %d",contc);
    printf("\n Numero de veces que cayo sello: %d",conts);
}