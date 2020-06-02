#include<stdio.h>
int main(){
    int n,i,p=0,ne=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>=10 && a[i]<=20){
            p++;
        }
        else{
            ne++;
        }
    }
    printf("%d in\n",p);
    printf("%d out\n",ne);
    return 0;
}
