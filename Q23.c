#include<stdio.h>

int main(){
    int money, ap, or, pe;
    scanf("%d,%d,%d,%d", &money, &ap, &or, &pe);
    money = money-ap*15-or*20-pe*30;
    if(money < 0){
        printf("0\n");
    }else{    
        int change[money+1][2], coin[3] = {1,5,50}, count[3]={0,0,0};
        change[0][0] = 0;
        for(int i = 1;i <= money;i++){
            for(int j = 0;j < 3;j++){
                change[i][0] = 0x7fffffff;
                if(i - coin[j] >= 0 && change[i-coin[j]][0]+1 < change[i][0]){
                    change[i][0] = change[i-coin[j]][0]+1;
                    change[i][1] = j;
                }
            }
        }
        for(int i = money;i > 0;){
            count[change[i][1]]++;
            i -= coin[change[i][1]];
        }
        printf("%d,%d,%d\n", count[0], count[1], count[2]);
    }
    return 0;
}