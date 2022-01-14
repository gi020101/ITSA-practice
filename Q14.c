#include<stdio.h>

int main(){
    int num;
    while(scanf("%d", &num) != EOF){
        int cout = 0, a = num;
        while(a != 0){
            a /= 10;
            cout++;
        }
        int arr[cout];
        for(int i = cout-1;i >= 0;i--){
            arr[i] = num%10;
            num /= 10;
        }
        int check = 0;
        for(int i = 0;i < cout/2;i++){
            if(arr[i] != arr[cout-i-1]){
                check = 1;
            }
        }
        if(check == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

    return 0;
}