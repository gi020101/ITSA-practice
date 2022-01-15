#include<stdio.h>

int main(){
    int point[4][2], num_count = 0;
    for(int i = 0;i < 4;i++){
        int p, re = 0;
        scanf("%d", &p);
        for(int j = 0;j < num_count;j++){
            if(point[j][0] == p){
                point[j][1]++;
                re = 1;
                break;
            }
        }
        if(re == 0){
            point[num_count][0] = p;
            point[num_count][1] = 1;
            num_count++;
        }
    }
    if(num_count == 1){
        printf("WIN\n");
    }else if(num_count == 2 && point[0][1] == 2){
        if(point[0][0] > point[1][0]){
            printf("%d\n", point[0][0]*2);
        }else{
            printf("%d\n", point[1][0]*2);
        }
    }else if(num_count == 3){
        int ans = 0;
        for(int i = 0;i < 3;i++){
            if(point[i][1] == 1){
                ans += point[i][0];
            }
        }
        printf("%d\n", ans);
    }else{
        printf("R\n");
    }

    return 0;
}