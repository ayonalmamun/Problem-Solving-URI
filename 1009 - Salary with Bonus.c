#include <stdio.h>
int main(){
    char n[20];
    double s,b,t;
    gets(n);
    scanf("%lf %lf", &s, &b);
    t = s + ((b*15)/100);
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}
