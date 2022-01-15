#include<stdio.h>

int main(){
    double height;
    int borg;
    while(scanf("%lf%d", &height, &borg) != EOF){
        if(borg == 1){
            printf("%.1lf\n", (height-80)*0.7);
        }else{
            printf("%.1lf\n", (height-70)*0.6);
        }
    }
    return 0;
}