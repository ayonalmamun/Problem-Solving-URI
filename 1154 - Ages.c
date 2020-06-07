#include<stdio.h>
int main(){
    int n,c=0;
    double avg=0;
    while(1){
        scanf("%d",&n);
        if(n<0){
            break;
        }
        avg=avg+n;
        c++;
    }
    avg=avg/c;
    printf("%.2lf\n",avg);
    return 0;
}
