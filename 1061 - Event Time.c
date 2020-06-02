#include <stdio.h>
int main(){
    int d1,h1,m1,s1,d2,h2,m2,s2,t1,t2,fd,fh,fm;
    char a[4],b[3],c[3],d[4],e[3],f[3];
    scanf("%s %d",a,&d1);
    scanf("%d %s %d %s %d",&h1,b,&m1,c,&s1);
    scanf("%s %d",d,&d2);
    scanf("%d %s %d %s %d",&h2,e,&m2,f,&s2);
    t1=d1*24*60*60+h1*60*60+m1*60+s1;
    t2=d2*24*60*60+h2*60*60+m2*60+s2;
    t2=t2-t1;
    fd=t2/24/60/60;
    t2=t2-(fd*24*60*60);
    fh=t2/60/60;
    t2=t2-(fh*60*60);
    fm=t2/60;
    t2=t2-(fm*60);
    printf("%d dia(s)\n",fd);
    printf("%d hora(s)\n",fh);
    printf("%d minuto(s)\n",fm);
    printf("%d segundo(s)\n",t2);
    /*Dia 5
    08 : 12 : 23
    Dia 9
    06 : 13 : 23*/
    return 0;
}
