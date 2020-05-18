#include <stdio.h>
int main(){
    double a, b, c, d;
    scanf("%lf %lf %lf",&a, &b, &c);
    a = a * 2;
    b = b * 3;
    c = c * 5;
    d = (a+b+c) / 10;
    printf("MEDIA = %.1lf\n",d);
    return 0;
}





