#include<stdio.h>

int main(){
    double base, height;
    while(scanf("%lf%lf", &base, &height) != EOF){
        printf("%.1lf\n", base*height/2);
    }
    return 0;
}