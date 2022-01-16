#include<stdio.h>

int main(){
    double a;
    while(scanf("%lf", &a) != EOF){
        a *= a;
        double b = (int)((a*10)+0.5)/10.0;
        printf("%.1lf\n", b);
    }
    return 0;
}