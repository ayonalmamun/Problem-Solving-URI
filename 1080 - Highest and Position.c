#include<stdio.h>
int main(){
    int i,j,a[100],temp=0,p=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        if(a[i]>temp){
            temp=a[i];
            p=i+1;
        }
    }
    printf("%d\n",temp);
    printf("%d\n",p);
    return 0;
}
