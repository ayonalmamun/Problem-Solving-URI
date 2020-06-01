#include <stdio.h>
int main(){
    double s,v1,v2,v3,v4,v5,v6;
    scanf("%lf",&s);
    if(s<=2000){
        printf("Isento\n");
    }
    else if(s>=2000.01 && s<=3000){
        v1=s-2000;
        v2=(v1*8)/100;
        printf("R$ %.2lf\n",v2);
    }
    else if(s>=3000.01 && s<=4500){
        v1=s-2000;
        v2=v1-1000;
        v1=v1-v2;
        v3=(v1*8)/100;
        v4=(v2*18)/100;
        printf("R$ %.2lf\n",v3+v4);
    }
    else if(s>=4500.01){
        v1=s-2000; //4520-2000=2520
        v2=v1-1000; //2520-1000=1520
        v3=v1-v2; //1000
        v4=(v3*8)/100;
        v3=v2-1500; //20
        v2= v2-v3;
        v5=(v2*18)/100;
        v6=(v3*28)/100;
        printf("R$ %.2lf\n",v4+v5+v6);
    }
    return 0;
}
