#include<stdio.h>

int f(int);
int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        printf("%d\n", f(num));
    }

    return 0;
}

int f(int n){
    if(n > 1){
        return f(n-1)+f(n/2);
    }else{
        return n+1;
    }
}