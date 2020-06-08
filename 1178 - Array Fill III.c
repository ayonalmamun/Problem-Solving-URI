#include<stdio.h>
int main(){
    double a[100],n;
    int i;
    scanf("%lf",&n);
    a[0]=n;
    for(i=0;i<100;i++){
        a[i+1]=a[i]/2.0;
        printf("N[%d] = %.4lf\n",i,a[i]);
    }
    return 0;
}


