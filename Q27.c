#include <stdio.h>     
 
int main() { 
    int answer, ans[4];
    scanf("%d", &answer);
    for(int i = 3;i >= 0;i--){
        ans[i] = answer%10;
        answer /= 10;
    }
    while(1){
        int myanswer, myans[4], check[4] = {0,0,0,0}, a = 0, b = 0;
        scanf("%d", &myanswer);
        for(int i = 3;i >= 0;i--){
            myans[i] = myanswer%10;
            myanswer /= 10;
        }
        if(myans[0] == 0 && myans[1] == 0 && myans[2] == 0 && myans[3] == 0){
            break;
        }
        for(int i = 0;i < 4;i++){
            if(ans[i] == myans[i]){
                check[i] = 1;
            }
        }
        for(int i = 0;i < 4;i++){
            if(check[i] != 1){    
                for(int j = 0;j < 4;j++){
                    if(ans[j] == myans[i]){
                        check[i] = 2;
                    }
                }
            }
        }
        for(int i = 0;i < 4;i++){
            if(check[i] == 1){
                a++;
            }else if(check[i] == 2){
                b++;
            }
        }
        printf("%dA%dB\n", a, b);

    }

    return 0; 
}