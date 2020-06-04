#include <stdio.h>
int main(){
    int i,n,x,y;
    double r,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        a=x;
        b=y;
        if(b==0){
            printf("divisao impossivel\n");
        }
        else{
            r=x/(y*1.0);
            printf("%.1lf\n",r);
        }
    }
    return 0;
}

