#include<stdio.h>

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        int notprime = 0;
        for(int i = 2;i < num;i++){
            if(num%i == 0){
                notprime = 1;
                break;
            }
        }
        if(notprime == 1){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }

    return 0;
}