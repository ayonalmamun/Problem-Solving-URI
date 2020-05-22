#include <stdio.h>
int main(){
    double a,b,c,d,e,r1,r2;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    r1=(a*2+b*3+c*4+d*1)/(2+3+4+1);
    printf("Media: %.1lf\n",r1);
    if(r1>=7){
        printf("Aluno aprovado.\n");
    }
    else if(r1>=5 && r1<=6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&e);
        printf("Nota do exame: %.1lf\n",e);
        r2=(r1+e)/2.0;
        if(r2>=5){
            printf("Aluno aprovado.\n");
        }
        else if(r2<=4.9){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",r2);
    }
    else if(r1<5){
        printf("Aluno reprovado.\n");
    }
    return 0;
}

