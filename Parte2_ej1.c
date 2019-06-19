#include <stdio.h>



int multiplo (int x, int y){
    if((y%x)==0){
      return 1;  
    }else{
        return 0;
    }
}
int main()
{
    int primero;
    int segundo;
    int multiplicidad;
    int x;

    do{
        printf("ingrese primer digito:");
        scanf("%d",&primero);
        printf("ingrese segundo digito:");
        scanf("%d",&segundo);
        printf("el primero es: %d , y el segundo: %d",primero,segundo);
        multiplicidad = multiplo(primero,segundo);

        if(multiplicidad==1 ){
            printf("\n%d es multiplo de %d\n", segundo,primero);
        }else{
            printf("\n%d no es multiplo de %d\n", segundo,primero);
        }
        
        printf("\n¿Quiere ingresar más digitos? (1 para 'SI', 0 para 'NO'):");
        scanf("%d",&x);
    }while(x==1);

return 0; 
 }



