#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char *str1, *str2, *s;
    str1 = malloc(129*sizeof(char));
    str2 = malloc(513*sizeof(char));
    scanf("%s\n", str1);
    scanf("%s", str2);
    int count = 0;;
    s = strstr(str2, str1);
    while(s){
        count++;
        s = strstr(s+1, str1);
    }

    printf("%d\n", count);
    return 0;
}