#include<stdio.h>
int main(){
    double a[12][12],sum=0,avg=0;
    int i,j,n;
    char c[2];
    scanf("%d %s",&n,c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
            if(i==n){
                sum=sum+a[i][j];
            }
        }
    }
    if(c[0]=='S'){
        printf("%.1lf\n",sum);
    }
    else if(c[0]=='M'){
        avg=sum/12.0;
        printf("%.1lf\n",avg);
    }
    return 0;
}




