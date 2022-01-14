#include<stdio.h>

int main(){
    int dec;
    while(scanf("%d", &dec) != EOF){
        int bin[8];
        for(int i = 0;i < 8;i++){
            bin[i] = 0;
        }
        if(dec < 0){
            dec *= -1;
            for(int i = 7;i >= 0;i--){
                bin[i] = dec%2;
                dec /= 2;
            }
            for(int i = 0;i < 8;i++){
                if(bin[i] == 0){
                    bin[i] = 1;
                }else{
                    bin[i] = 0;
                }
            }
            int a = 1;
            for(int i = 7;i >= 0;i--){
                if(bin[i] + a > 1){
                    bin[i] = 0;
                    a = 1;
                }else{
                    bin[i] += a;
                    a = 0;
                }
            }
        }else{
            for(int i = 7;i >= 0;i--){
                bin[i] = dec%2;
                dec /= 2;
            }
        }
        for(int i = 0;i < 8;i++){
            printf("%d", bin[i]);
        }
        printf("\n");
    }

    return 0;
}