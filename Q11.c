#include<stdio.h>

int main(){
    int row, col;
    while(scanf("%d%d", &row, &col) != EOF){
        int remat[col][row];
        for(int i = 0;i < row;i++){
            for(int j = 0;j < col;j++){
                scanf("%d", &remat[j][i]);
            }
        }

        for(int i = 0;i < col;i++){
            for(int j = 0;j < row;j++){
                printf("%d", remat[i][j]);
                if(j != row-1)printf(" ");
            }
            printf("\n");
        }
        
    }
    return 0;
}