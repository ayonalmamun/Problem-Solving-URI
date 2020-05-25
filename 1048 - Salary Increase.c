#include <stdio.h>
int main(){
    double i,t,ba;
    scanf("%lf",&i);
    if(i>=0 && i<=400){
        ba=((i*15)/100);
        t=i+ba;
        printf("Novo salario: %.2lf\n",t);
        printf("Reajuste ganho: %.2lf\n",ba);
        printf("Em percentual: 15 %%\n");
    }
    else if(i>=400.01 && i<=800){
        ba=((i*12)/100);
        t=i+ba;
        printf("Novo salario: %.2lf\n",t);
        printf("Reajuste ganho: %.2lf\n",ba);
        printf("Em percentual: 12 %%\n");
    }
    else if(i>=800.01 && i<=1200){
        ba=((i*10)/100);
        t=i+ba;
        printf("Novo salario: %.2lf\n",t);
        printf("Reajuste ganho: %.2lf\n",ba);
        printf("Em percentual: 10 %%\n");
    }
    else if(i>=1200.01 && i<=2000){
        ba=((i*7)/100);
        t=i+ba;
        printf("Novo salario: %.2lf\n",t);
        printf("Reajuste ganho: %.2lf\n",ba);
        printf("Em percentual: 7 %%\n");
    }
    else if(i>=1200.01 && i<=2000){
        ba=((i*7)/100);
        t=i+ba;
        printf("Novo salario: %.2lf\n",t);
        printf("Reajuste ganho: %.2lf\n",ba);
        printf("Em percentual: 7 %%\n");
    }
    else if(i>2000){
        ba=((i*4)/100);
        t=i+ba;
        printf("Novo salario: %.2lf\n",t);
        printf("Reajuste ganho: %.2lf\n",ba);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}

