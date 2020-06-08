#include<stdio.h>
int main(){
    int i,n,a[20],c=0,temp=0;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
    }
    for(i=19;i>=10;i--){
        temp=a[c];
        a[c]=a[i];
        a[i]=temp;
        c++;
    }
    for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}


