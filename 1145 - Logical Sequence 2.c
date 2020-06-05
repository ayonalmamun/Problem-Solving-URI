#include<stdio.h>
int main(){
    int i,j,n,x;
    scanf("%d %d",&n,&x);
    for(i=1;i<=x;i++){
        for(j=1;j<=n;j++){
            if(j==n){
                printf("%d",i);
            }
            else{
                printf("%d ",i);
            }
            if(j!=n){
                i++;
            }
        }
        printf("\n");
    }
    return 0;
}


