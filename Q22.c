#include<stdio.h>

int main(){
    int arr[3][3];
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int check = 0, num;
    for(int i = 0;i < 3;i++){
        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]){
            check = 1;
        }
    }
    for(int i = 0;i < 3;i++){
        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]){
            check = 1;
        }
    }
    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]){
        check = 1;
    }
    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]){
        check = 1;
    }
    if(check == 1){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}