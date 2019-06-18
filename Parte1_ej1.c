#include <stdio.h>
int main ()
{
    int x;
    printf("ingrese las ventas:");
    scanf("%d",&x);
    
  if (x>0 && x<=20000)
    {
      x = x*0.05;
    }
  else if (x>20001 && x<=50000)
    {
      x *= 0.07;
      x += 1000;
    }
  else if (x>=50001)
    {
      x *= 0.1;
      x += 3100;
    }
  printf("\nLa comisión es:%d \n",x);
  return 0;
}


