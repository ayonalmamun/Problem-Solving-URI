#include<stdio.h>
int main(){
    int i,j,n,a[100];
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2;i<n;i++){
        a[i]=a[i-2]+a[i-1];
    }
    printf("0");
    for(j=1;j<n;j++){
        printf(" %d",a[j]);
    }
    printf("\n");
    return 0;
}
