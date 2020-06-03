#include<stdio.h>
int main(){
    int a,b,i=1,j=7,m=7;
    for (a=0;a<15;a++){
        printf("I=%d J=%d\n",i,j);
        j--;
        if(j==4){
            m=m+2;
            j=m;
            i=i+2;
        }
        if(i==3 && j==6){
            m=m+2;
            j=m;
            i=i+2;
        }
        if(i==5 && j==8){
            m=m+2;
            j=m;
            i=i+2;
        }
        if(i==7 && j==10){
            m=m+2;
            j=m;
            i=i+2;
        }
    }
    return 0;
}

