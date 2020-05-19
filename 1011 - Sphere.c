#include <stdio.h>
#define pi 3.14159
int main(){
    double R;
    scanf("%lf",&R);
    double A = (4/3.0) * pi * R * R * R;
    printf("VOLUME = %.3lf\n",A);
    return 0;
}
