#include<stdio.h>
#include<ctype.h>

int main(){
    char alp;
    alp = getchar();
    int num, arr[9], x1, x2, p;
    if(alp < 'I'){
        x1 = (alp-'A'+10)/10;
        x2 = (alp-'A'+10)%10;
    }else if(alp > 'I' && alp < 'O'){
        x1 = (alp-'A'+9)/10;
        x2 = (alp-'A'+9)%10;
    }else if(alp > 'O' && alp < 'W'){
        x1 = (alp-'A'+8)/10;
        x2 = (alp-'A'+8)%10;
    }else if(alp == 'X'){
        x1 = 3;x2 = 0;
    }else if(alp == 'Y'){
        x1 = 3;x2 = 1;
    }else if(alp == 'W'){
        x1 = 3;x2 = 2;
    }else if(alp == 'Z'){
        x1 = 3;x2 = 3;
    }else if(alp == 'I'){
        x1 = 3;x2 = 4;
    }else if(alp == 'O'){
        x1 = 3;x2 = 5;
    }
    scanf("%d", &num);
    for(int i = 8;i >= 0;i--){
        arr[i] = num%10;
        num /= 10;
    }
    p = x1+9*x2+8*arr[0]+7*arr[1]+6*arr[2]+5*arr[3]+4*arr[4]+3*arr[5]+2*arr[6]+arr[7]+arr[8];
    if(p%10 == 0){
        printf("CORRECT!!!\n");
    }else{
        printf("WRONG!!!\n");
    }

    return 0;
}