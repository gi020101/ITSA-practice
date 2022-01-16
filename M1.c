#include<stdio.h>

int main(){
    double up, down, height;
    while(scanf("%lf%lf%lf", &up, &down, &height) != EOF){
        printf("Trapezoid area:%.1lf\n", (up+down)*height/2);
    }

    return 0;

}