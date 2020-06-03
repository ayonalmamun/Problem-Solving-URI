#include<stdio.h>
int main(){
    int j=1,i,k=7;
    for (i=0;i<15;i++){
        printf("I=%d J=%d\n",j,k);
        k--;
        if(k==4){
            j=j+2;
            k=7;
        }
    }
    return 0;
}
