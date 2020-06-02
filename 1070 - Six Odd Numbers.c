#include<stdio.h>
int main(){
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=n;flag!=6;i++){
        if(i%2==1){
            printf("%d\n",i);
            flag++;
        }
    }
    return 0;
}
