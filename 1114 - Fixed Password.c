#include <stdio.h>
int main(){
    int m;
    while(1){
        scanf("%d",&m);
        if(m==2002){
            printf("Acesso Permitido\n");
            break;
        }
        else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}
