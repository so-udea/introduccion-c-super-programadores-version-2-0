#include <stdio.h>

int main()
{
    int y;
    printf("ingrese número de renglones:");
    scanf("%d",&y);

    int numero = y;
    int ant = 0;
    int primer=1;
    int x=0;
    for(int i=1; i<= numero; i++){
        while(x<i){
            if(ant==0){
               printf("1");
               ant=1;
            }else{
                printf("0");
                ant=0;
            }
            x++;
        }
        x=0;
        printf("\n");
            if(primer==1){
               ant=1;
               primer=0;
            }else{
                ant=0;
                primer=1;
            }
        
   }
    return 0;
}