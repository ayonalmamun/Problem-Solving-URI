#include <stdio.h>
int main(){
    int s,h,m;
    scanf("%d",&s);
    h = s/60/60;
    s = s-(h*60*60);
    m = s/60;
    s = s-(m*60);
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}



