#include<stdio.h>
int main(){
    double a[6],sum=0,avg=0;
    int i,flag=0;
    for (i=0;i<6;i++){
        scanf("%lf",&a[i]);
    }
    for (i=0;i<6;i++){
        if(a[i]>0){
            sum=sum+a[i];
            flag++;
        }
    }
    avg=sum/flag;
    printf("%d valores positivos\n",flag);
    printf("%.1lf\n",avg);
    return 0;
}
