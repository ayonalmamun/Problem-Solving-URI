#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0 && a[i]>0){
            printf("EVEN POSITIVE\n");
        }
        else if(a[i]%2==1 && a[i]>0){
            printf("ODD POSITIVE\n");
        }
        else if(a[i]%2==0 && a[i]<0){
            printf("EVEN NEGATIVE\n");
        }
        else if(a[i]%2==-1 && a[i]<0){
            printf("ODD NEGATIVE\n");
        }
        else if(a[i]==0){
            printf("NULL\n");
        }
    }
    return 0;
}


