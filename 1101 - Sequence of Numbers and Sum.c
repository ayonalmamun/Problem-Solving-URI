#include <stdio.h>
int main(){
    int m,n,a,b,i,sum;
    while(1){
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0){
            break;
        }
        if(m>n){
            a=n;
            b=m;
        }
        else{
            a=m;
            b=n;
        }
        sum=0;
        for(i=a;i<=b;i++){
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
