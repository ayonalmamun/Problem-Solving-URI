#include<stdio.h>
int main(){
    double i,s=0,x=1,y=1;
    for(i=1;i<=20;i++){
        s=s+(x/y);
        x=x+2;;
        y=y*2;
    }
    printf("%.2lf\n",s);
    return 0;
}


