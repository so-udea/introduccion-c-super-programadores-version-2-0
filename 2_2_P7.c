#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf(" Teniendo en cuenta que un polinomio cuadratico");
    printf("\n esta definido como a*x^2 + b*x + c = 0");
    printf("\n Ingrese (a) :");
    scanf("%d",&a);
    printf(" Ingrese (b) :");
    scanf("%d",&b);
    printf(" Ingrese (c) :");
    scanf("%d",&c);
    bachiller(a,b,c);
    return 0;
}
double discriminante(int a, int b, int c){
    double D =(pow(b,2))-(4*a*c);
    return D;
}
void bachiller(int a, int b, int c){
    double D = discriminante(a,b,c);
    double x1,x2, R, I;
    if(D ==0){
        x1= (-b)/(2*a);
        imprimirRaicesIguales(x1);
    }
    else if(D>0){
        x1 = (-b - sqrt (D))/(2*a);
        x2 = (-b + sqrt (D))/(2*a);
        imprimirRaicesDiferentes(x1,x2);
    }else{
        R= (-b)/(2*a);
        I= (sqrt(-D)/(2*a));
        imprimirRaicesComplejas(R,I);
    }
}
void imprimirRaicesIguales(double r){
    printf("X1 con multiplicidad 2 con X1 siendo : %lf",r);
}
void imprimirRaicesDiferentes(double r, double i){
    printf("la raiz X1 es: %lf , la raiz X2 es : %lf",r,i);
}
void imprimirRaicesComplejas(double r, double i){
    if((r > 0) & (i > 0)) {
    printf("(%lf) + (%lf)j, (%lf) - (%lf)j\n", r, i, r, i);
  }
    else if ((r > 0) & (i < 0)) {
    printf("(%.lf) + (%lf)j, (%lf) - (%lf)j\n", r, i, r, i);
  }
  else if ((r < 0) & (i > 0)) {
    printf("(%lf) + (%lf)j, (%lf) - (%lf)j\n", r, i, r, i);
  }
  else if ((r == 0) & (i > 0)) {
    printf("(%lf)j, (%lf)j\n", r, i);
  }
  else if ((r == 0) & (i < 0)) {
    printf("(%lf)j, (%lf)j\n", i, i);
  }
  else if ((r < 0) & (i == 0)) {
    printf("(%lf)\n", r);
  }
  else if ((r < 0) & (i < 0)) {
    printf("(%lf) + (%lf)j, (%lf) - (%lf)j\n", r, i, r, i);
  }
}



