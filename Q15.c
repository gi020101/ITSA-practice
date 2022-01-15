#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char line[101];
    gets(line);
    int alp[26], len = strlen(line), ifword = 0, word = 0;
    for(int  i = 0;i < 26;i++){
        alp[i] = 0;
    }
    for(int i = 0;i < len;i++){
        if(isalpha(line[i])){
            if(islower(line[i])){
                alp[line[i]-32-'A']++;
            }else{
                alp[line[i]-'A']++;
            }
            if(ifword == 0){
                word++;
                ifword = 1;
            }
        }else if(!isalpha(line[i]) && ifword == 1){
            ifword = 0;
        }
    }
    printf("%d\n", word);
    for(int i = 0;i < 26;i++){
        if(alp[i] != 0){
            printf("%c : %d\n", 97+i, alp[i]);
        }
    }

    return 0;
}