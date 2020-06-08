#include<stdio.h>
int main(){
    int a[1000],i,n,x=0;
    scanf("%d",&n);
    for(i=0;i<1000;i++){
        if(x==n){
            x=0;
        }
        a[i]=x;
        x++;
    }
    for(i=0;i<1000;i++){
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}


