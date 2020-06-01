#include<stdio.h>
int main(){
    double a[6];
    int flag=0,i;
    for (i=0;i<6;i++){
        scanf("%lf",&a[i]);
    }
    for (i=0;i<6;i++){
        if(a[i]>0){
            flag++;
        }
    }
    printf("%d valores positivos\n",flag);
    return 0;
}

