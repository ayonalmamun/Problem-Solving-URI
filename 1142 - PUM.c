#include<stdio.h>
int main(){
    int i,n,a=1;
    scanf("%d",&n);
        for(i=0;i<n;i++){
            printf("%d %d %d PUM\n",a,a+1,a+2);
            a=a+4;
        }
    return 0;
}
