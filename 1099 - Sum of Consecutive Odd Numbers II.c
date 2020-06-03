#include<stdio.h>
int main(){
    int i,n,x,y,temp=0,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if(x>y){
            temp=x;
            x=y;
            y=temp;
        }
        for(j=x+1;j<y;j++){
            if(j%2==1){
                sum=sum+j;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }

    return 0;
}
