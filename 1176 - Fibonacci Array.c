#include<stdio.h>
int main(){
    long long int a,j,x,y,z;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x=0;
        y=1;
        scanf("%lld",&a);
        for(j=0;j<=a;j++){
            if(j<=1){
                z=j;
            }
            else{
                z=x+y;
                x=y;
                y=z;
            }
        }
        printf("Fib(%lld) = %lld\n",a,z);
    }
    return 0;
}


