#include <stdio.h>
int main ()
{
    int x;
    printf("ingrese numero final (iniciando desde 1):");
    scanf("%d",&x);

    int N = x;
    int uno =1;
    int mul =0;
    int i=1;
    int j=1;
    int lim=10;
    while(i<=lim){    
        while(j<=N){   
            mul=j*i;  
            printf ("%dx%d= %d " ,j , i, mul);
            j++;
        }
        j=1;        
        i++;
        printf("\n");
    }
    return 0;
}
