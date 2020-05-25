#include <stdio.h>
#include <string.h>
int main(){
    char a[20],b[20],c[20];
    char i1[]={"vertebrado"};
    char i2[]={"invertebrado"};
    char i3[]={"ave"};
    char i4[]={"mamifero"};
    char i5[]={"inseto"};
    char i6[]={"anelideo"};
    char i7[]={"carnivoro"};
    char i8[]={"onivoro"};
    char i9[]={"herbivoro"};
    char i10[]={"hematofago"};
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    if (strcmp(a,i1)==0){
        if (strcmp(b,i3)==0){
            if (strcmp(c,i7)==0){
                printf("aguia\n");
            }
            else if (strcmp(c,i8)==0){
                printf("pomba\n");
            }
        }
        else if (strcmp(b,i4)==0){
            if (strcmp(c,i8)==0){
                printf("homem\n");
            }
            if (strcmp(c,i9)==0){
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(a,i2)==0){
        if (strcmp(b,i5)==0){
            if (strcmp(c,i10)==0){
                printf("pulga\n");
            }
            else if (strcmp(c,i9)==0){
                printf("lagarta\n");
            }
        }
        else if (strcmp(b,i6)==0){
            if (strcmp(c,i10)==0){
                printf("sanguessuga\n");
            }
            else if (strcmp(c,i8)==0){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}

