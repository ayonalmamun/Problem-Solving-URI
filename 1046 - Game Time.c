#include <stdio.h>
int main(){
    int s,e,t;
    scanf("%d %d",&s,&e);
    t=e-s;
    if(t<0){
        t=24+(e-s);
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    else if(s==e){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S)\n",t);
    }
    return 0;
}

