#include<stdio.h>
#include<math.h>

int main(){
    double x, y;
    while(scanf("%lf%lf", &x, &y) != EOF){
        if(pow(x, 2)+pow(y, 2)- 10000 > 1e-6){
            printf("outside\n");
        }else{
            printf("inside\n");
        }
    }

    return 0;
}