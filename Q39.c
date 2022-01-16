#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0;i < n;i++){
        int sc[3], fail_num = 0, total = 0, over80 = 0;
        for(int j = 0;j < 3;j++){
            scanf("%d", &sc[j]);
            if(sc[j] < 60){
                fail_num++;
            }else if(sc[j] >= 80){
                over80++;
            }
            total += sc[j];
        }
        if(fail_num == 0){
            printf("P\n");
        }else if(fail_num == 1 && total >= 220){
            printf("P\n");
        }else if(fail_num == 1 && total < 220){
            printf("M\n");
        }else if(fail_num == 2 && over80 > 0){
            printf("M\n");
        }else{
            printf("F\n");
        }
    }
    return 0;
}