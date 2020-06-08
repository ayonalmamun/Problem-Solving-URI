#include<stdio.h>
int main(){
    int a[15],o[5],e[5],oi=0,ei=0,i,j;
    for(i=0;i<15;i++){
        scanf("%d",&a[i]);
        if(ei==5){
           for(j=0;j<5;j++){
                printf("par[%d] = %d\n",j,e[j]);
           }
           ei=0;
        }
        if(oi==5){
           for(j=0;j<5;j++){
                printf("impar[%d] = %d\n",j,o[j]);
           }
           oi=0;
        }
        if(a[i]%2==0){
            e[ei]=a[i];
            ei++;
        }
        else{
            o[oi]=a[i];
            oi++;
        }
    }
    for(i=0;i<oi;i++){
        printf("impar[%d] = %d\n",i,o[i]);
    }
    for(i=0;i<ei;i++){
        printf("par[%d] = %d\n",i,e[i]);
    }
    return 0;
}


