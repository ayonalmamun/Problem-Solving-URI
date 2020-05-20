#include <stdio.h>
int main(){
    int i,q,w,s,r,t,y,u,v;
    scanf("%d",&i);
    q = i/100;
    w = i%100/50;
    r = i%100%50/20;
    s = i%100%50%20/10;
    t = i%100%50%20%10/5;
    u = i%100%50%20%10%5/2;
    v = i%100%50%20%10%5%2/1;
    printf("%d\n",i);
    printf("%d nota(s) de R$ 100,00\n",q);
    printf("%d nota(s) de R$ 50,00\n",w);
    printf("%d nota(s) de R$ 20,00\n",r);
    printf("%d nota(s) de R$ 10,00\n",s);
    printf("%d nota(s) de R$ 5,00\n",t);
    printf("%d nota(s) de R$ 2,00\n",u);
    printf("%d nota(s) de R$ 1,00\n",v);
    return 0;
}
