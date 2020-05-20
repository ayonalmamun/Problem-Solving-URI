#include <stdio.h>
int main(){
    int i,q,e;
    scanf("%d",&i);
    printf("%d\n",i);
    q = i/100;
    printf("%d nota(s) de R$ 100,00\n",q);
    e = i%100;
    q = e/50;
    printf("%d nota(s) de R$ 50,00\n",q);
    e = e%50;
    q = e/20;
    printf("%d nota(s) de R$ 20,00\n",q);
    e = e%20;
    q = e/10;
    printf("%d nota(s) de R$ 10,00\n",q);
    e = e%10;
    q = e/5;
    printf("%d nota(s) de R$ 5,00\n",q);
    e = e%5;
    q = e/2;
    printf("%d nota(s) de R$ 2,00\n",q);
    e = e%2;
    q = e/1;
    printf("%d nota(s) de R$ 1,00\n",q);
    return 0;
}
