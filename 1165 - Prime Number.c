#include <stdio.h>
int main(){
    int i,n,c,t,j;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        c=0;
        scanf("%d",&n);
        for(i=2;i<=n;i++){
            if(n%i==0 && i!=n){
                c++;
            }
        }
        if(c==0){
            printf("%d eh primo\n",n);
        }
        else{
            printf("%d nao eh primo\n",n);
        }
    }
    return 0;
}

