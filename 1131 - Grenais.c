#include <stdio.h>
int main(){
    int a,b,c,d=0,e=0,f=0,g=0;
    while(1){
        scanf("%d %d",&a,&b);
        printf("Novo grenal (1-sim 2-nao)\n");
        d++;
        if(a>b){
            e++;
        }
        else if(b>a){
            f++;
        }
        else{
            g++;
        }
        scanf("%d",&c);
        if(c==2){
            break;
        }
        if(c==1){
            continue;
        }
    }
    printf("%d grenais\n",d);
    printf("Inter:%d\n",e);
    printf("Gremio:%d\n",f);
    printf("Empates:%d\n",g);
    if(e>f){
        printf("Inter venceu mais\n");
    }
    else if(f>e){
        printf("Gremio venceu mais\n");
    }
    else if(e==f){
        printf("Não houve vencedor\n");
    }
    return 0;
}

