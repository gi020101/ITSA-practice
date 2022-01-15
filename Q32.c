#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char line[101];
    gets(line);
    int shift, len;
    scanf("%d", &shift);
    len = strlen(line);
    for(int i = 0;i < len;i++){
        if(isalpha(line[i])){
            if(line[i] <= 90){
                if(line[i]+shift > 90){
                    printf("%c",64+(line[i]+shift-90));
                }else{
                    printf("%c", line[i]+shift);
                }
            }else{
                if(line[i]+shift > 122){
                    printf("%c", 96+(line[i]+shift-122));
                }else{
                    printf("%c", line[i]+shift);
                }
            }
        }else if(isdigit(line[i])){
            if(line[i]-'0'+shift > 9){
                printf("%d", -1+(line[i]-'0'+shift-9));
            }else{
                printf("%d", line[i]-'0'+shift);
            }
        }else{
            printf("%c", line[i]);
        }
    }
    printf("\n");
    return 0;
}