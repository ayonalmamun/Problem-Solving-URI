#include <stdio.h>
int main(){
    int i,n,a,j,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum=0;
        for(j=1;j<a;j++){
            if(a%j==0){
                sum=sum+j;
            }
        }
        if(sum==a){
            printf("%d eh perfeito\n",a);
        }
        else{
            printf("%d nao eh perfeito\n",a);
        }
    }
    return 0;
}
