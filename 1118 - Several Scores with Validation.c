#include <stdio.h>
void avg(){
    double a,b,d=0;
    int c=0;
    while(1){
        if(c==2){
            break;
        }
        scanf("%lf",&a);
        if(a>=0 && a<=10){
            c++;
            d=d+a;
        }
        else{
            printf("nota invalida\n");
        }
    }
    d=d/2.0;
    printf("media = %.2lf\n",d);
}
int main(){
    avg();
    while(1){
        int v;
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&v);
        if(v==1){
            avg();
        }
        if(v==2){
            break;
        }
    }
    return 0;
}

