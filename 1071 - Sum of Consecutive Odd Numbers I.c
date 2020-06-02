#include<stdio.h>
int main(){
    int x,y,i,sum=0,temp=0;
    scanf("%d %d",&x,&y);
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for(i=x+1;i<y;i++){
        if(i%2==1 || i%2==-1){
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
