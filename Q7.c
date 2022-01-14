#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        int plu1[2], plu2[2];
        char operator[2];
        scanf(" %c", &operator[0]);
        scanf("%d %d %d %d", &plu1[0], &plu1[1], &plu2[0], &plu2[1]);
        if(operator[0] == '+'){
            printf("%d %d\n", plu1[0]+plu2[0], plu1[1]+plu2[1]);
        }else if(operator[0] == '-'){
            printf("%d %d\n", plu1[0]-plu2[0], plu1[1]-plu2[1]);
        }else if(operator[0] == '*'){
            printf("%d %d\n", plu1[0]*plu2[0]-plu1[1]*plu2[1], plu1[0]*plu2[1]+plu1[1]*plu2[0]);
        }
    }

    return 0;
}