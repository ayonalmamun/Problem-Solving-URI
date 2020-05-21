#include <stdio.h>
int main(){
    double i;
    scanf("%lf",&i);
    if(i>=0 && i<=25){
        printf("Intervalo [0,25]\n");
    }
    if(i>25 && i<=50){
        printf("Intervalo (25,50]\n");
    }
    if(i>50 && i<=75){
        printf("Intervalo (50,75]\n");
    }
    if(i>75 && i<=100){
        printf("Intervalo (75,100]\n");
    }
    if(i<0 || i>100){
        printf("Fora de intervalo\n");
    }
    return 0;
}

