#include<stdio.h>
int main(){
    int i,n,p1,p2,fp1,fp2,sp1,sp2,c;
    double r1,r2;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        c=1;
        scanf("%d %d %lf %lf",&p1,&p2,&r1,&r2);
        fp1=(p1*r1)/100;
        fp2=(p2*r2)/100;
        sp1=p1+fp1;
        sp2=p2+fp2;
        //printf("%d %d %d %d %d %d\n",p1,p2,fp1,fp2,sp1,sp2);
        while(sp1<=sp2){
            fp1=(sp1*r1)/100;
            fp2=(sp2*r2)/100;
            sp1=sp1+fp1;
            sp2=sp2+fp2;
            c++;
        }
        if(c>100){
            printf("Mais de 1 seculo.\n",c);
        }
        else{
            printf("%d anos.\n",c);
        }
    }
    return 0;
}


