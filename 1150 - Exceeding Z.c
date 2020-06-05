#include<stdio.h>
int main(){
    int a,b,i,c=0,sum=0;
    scanf("%d",&a);
    while(1){
        scanf("%d",&b);
        if(b>a){
            break;
        }
    }
    for(i=a;sum<=b;i++){
        sum=sum+i;
        c++;
    }
    printf("%d\n",c);
    return 0;
}



