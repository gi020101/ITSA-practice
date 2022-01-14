#include<stdio.h>

int f(int, int);
int main(){
    int a, b;
    while(scanf("%d%d", &a, &b) != EOF){
        printf("%d\n", f(a, b));
    }

    return 0;
}

int f(int a, int b){
    if(b == 0){
        return a;
    }
    return f(b, a%b);
}