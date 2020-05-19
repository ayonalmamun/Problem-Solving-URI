#include <stdio.h>
#define pi 3.14159
int main(){
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double tri = (1.0/2) * a * c;
    double ar = pi * c * c;
    double tra = ((a + b) / 2) * c;
    double q = b * b;
    double r = a * b;
    printf("TRIANGULO: %.3lf\n",tri);
    printf("CIRCULO: %.3lf\n",ar);
    printf("TRAPEZIO: %.3lf\n",tra);
    printf("QUADRADO: %.3lf\n",q);
    printf("RETANGULO: %.3lf\n",r);
    return 0;
}

