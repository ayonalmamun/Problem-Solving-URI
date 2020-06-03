#include<stdio.h>
int main(){
    int i,n;
    double a,b,c,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%lf %lf %lf",&a,&b,&c);
        a=a*2;
        b=b*3;
        c=c*5;
        r=(a+b+c)/10;
        printf("%.1lf\n",r);
    }
    return 0;
}
