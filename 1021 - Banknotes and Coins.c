#include <stdio.h>
int main(){
    double i;
    int a;
    scanf("%lf",&i);
    printf("NOTAS:\n");
    a=i*100;
    printf("%d nota(s) de R$ 100.00\n",a/10000);
    a=a%10000;
    printf("%d nota(s) de R$ 50.00\n",a/5000);
    a=a%5000;
    printf("%d nota(s) de R$ 20.00\n",a/2000);
    a=a%2000;
    printf("%d nota(s) de R$ 10.00\n",a/1000);
    a=a%1000;
    printf("%d nota(s) de R$ 5.00\n",a/500);
    a=a%500;
    printf("%d nota(s) de R$ 2.00\n",a/200);
    a=a%200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",a/100);
    a=a%100;
    printf("%d moeda(s) de R$ 0.50\n",a/50);
    a=a%50;
    printf("%d moeda(s) de R$ 0.25\n",a/25);
    a=a%25;
    printf("%d moeda(s) de R$ 0.10\n",a/10);
    a=a%10;
    printf("%d moeda(s) de R$ 0.05\n",a/5);
    a=a%5;
    printf("%d moeda(s) de R$ 0.01\n",a);
    return 0;
}
