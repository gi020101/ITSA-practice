#include<stdio.h>

int main(){
    int in[2], out[2];
    while(scanf("%d%d%d%d", &in[0], &in[1], &out[0], &out[1]) != EOF){
        int time = (out[0]-in[0])*60 + (out[1]-in[1]), pay;
        if(time/30 <= 4){
            pay = (time/30)*30;
        }else if(time/30 < 8){
            pay = 120 + (time/30-4)*40;
        }else{
            pay = 120 + 160 + (time/30-8)*60;
        }
        printf("%d\n", pay);
    }

    return 0;
}