#include<stdio.h>
int main(){
    int n,i,a,c=0,r=0,s=0,t=0;
    char b[2];
    double avg,v1,v2;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %s",&a,&b);
        if(b[0]=='C'){
            c=c+a;
            //printf("%d\n",c);
        }
        else if(b[0]=='R'){
            r=r+a;
            //printf("%d\n",r);
        }
        else if(b[0]=='S'){
            s=s+a;
            //printf("%d\n",s);
        }
    }
    t=c+r+s;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    v1=c;
    v2=t;
    avg=v1/v2;
    printf("Percentual de coelhos: %.2lf %%\n",avg*100);
    v1=r;
    v2=t;
    avg=v1/v2;
    printf("Percentual de ratos: %.2lf %%\n",avg*100);
    v1=s;
    v2=t;
    avg=v1/v2;
    printf("Percentual de sapos: %.2lf %%\n",avg*100);
    return 0;
}
