#include<stdio.h>

int main(){
    double degree;
    scanf("%lf", &degree);
    if(degree - 120 < 1e-6){
        printf("Summer months:%.2lf\n", degree*2.1);
        printf("Non-Summer months:%.2lf\n", degree*2.1);
    }else if(degree - 330 < 1e-6){
        printf("Summer months:%.2lf\n", 120*2.1 + (degree-120)*3.02);
        printf("Non-Summer months:%.2lf\n", 120*2.1 + (degree-120)*2.68);
    }else if(degree - 500 < 1e-6){
        printf("Summer months:%.2lf\n", 120*2.1+210*3.02+(degree-330)*4.39);
        printf("Non-Summer months:%.2lf\n", 120*2.1+210*2.68+(degree-330)*3.61);
    }else if(degree - 700 < 1e-6){
        printf("Summer months:%.2lf\n", 120*2.1+210*3.02+170*4.39+(degree-500)*4.97);
        printf("Non-Summer months:%.2lf\n", 120*2.1+210*2.68+170*3.61+(degree-500)*4.01);
    }else{
        printf("Summer months:%.2lf\n", 120*2.1+210*3.02+170*4.39+200*4.97+(degree-700)*5.63);
        printf("Non-Summer months:%.2lf\n", 120*2.1+210*2.68+170*3.61+200*4.01+(degree-700)*4.5);
    }

    return 0;
}