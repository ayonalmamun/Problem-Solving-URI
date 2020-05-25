#include <stdio.h>
int main(){
    int sh,sm,eh,em,tm1,tm2,th,tm;
    scanf("%d %d %d %d",&sh,&sm,&eh,&em);
    tm1=sh*60+sm;
    tm2=eh*60+em;
    tm2=tm2-tm1;
    if(tm2>0){
        th=tm2/60;
        tm=tm2%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
    }
    else if(tm2<0){
        tm2=tm2+(24*60);
        th=tm2/60;
        tm=tm2%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",th,tm);
    }
    else if(tm2==0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}

