#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,x1,x2;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(pow(b,2)-(4*a*c) <0 || a<=0){
        printf("Impossivel calcular\n");
    }
    else{
        x1 = (-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
        x2 = (-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
    }

    return 0;
}

