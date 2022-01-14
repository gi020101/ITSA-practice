#include<stdio.h>

int main(){
    int num, arr[4];
    scanf("%d", &num);
    for(int i = 3;i >= 0;i--){
        arr[i] = num%10;
        num /= 10;
    }
    char dig[10][26] = {{"******   **   **   ******"},
                        {"    *    *    *    *    *"},
                        {"*****    *******    *****"},
                        {"*****    ******    ******"},
                        {"*   **   ******    *    *"},
                        {"******    *****    ******"},
                        {"******    ******   ******"},
                        {"*****    *    *    *    *"},
                        {"******   *******   ******"},
                        {"******   ******    *    *"}};
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 4;j++){
            for(int k = 5*i;k < 5*(i+1);k++){
                printf("%c", dig[arr[j]][k]);
            }
            if(j < 3)printf(" ");
        }
        printf("\n");
    }

    return 0;
}