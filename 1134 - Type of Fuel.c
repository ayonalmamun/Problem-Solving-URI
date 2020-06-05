#include<stdio.h>
int main(){
    int i,a=0,b=0,c=0;
    while(1){
        scanf("%d",&i);
        if(i==4){
            break;
        }
        else if(i==1){
            a++;
        }
        else if(i==2){
            b++;
        }
        else if(i==3){
            c++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;
}
