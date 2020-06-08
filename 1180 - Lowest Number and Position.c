#include<stdio.h>
int main(){
    int n,i,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int temp=a[0];
    for(i=1;i<n;i++){
        if(a[i]<temp){
            temp=a[i];
            c=i;
        }
    }
    printf("Menor valor: %d\n",temp);
    printf("Posicao: %d\n",c);
    return 0;
}



