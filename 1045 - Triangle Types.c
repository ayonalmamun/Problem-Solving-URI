#include <stdio.h>
int main(){
    double a,b,c,n[3],temp=0;
    int i,j;
    for(i=0;i<3;i++){
        scanf("%lf",&n[i]);
    }
    for(i=0;i<3;i++){
       for(j=0;j<3;j++){
            if(n[i]>n[j]){
                temp=n[i];
                n[i]=n[j];
                n[j]=temp;
            }
       }
    }
    a=n[0];
    b=n[1];
    c=n[2];
    if(a>=(b+c)){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((a*a)==((b*b)+(c*c))){
        printf("TRIANGULO RETANGULO\n");
    }
    else if((a*a)>((b*b)+(c*c))){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if((a*a)<((b*b)+(c*c))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && a==c && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b || a==c || b==c){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}


