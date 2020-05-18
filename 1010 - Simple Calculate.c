#include <stdio.h>
int main(){
    int a,b,d,e;
    double c,f,t;
    scanf("%d %d %lf %d %d %lf", &a, &b, &c, &d, &e, &f);
    t = b * c + e * f;
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
    return 0;
}

