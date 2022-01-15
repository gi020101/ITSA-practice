#include<stdio.h>

int main(){
    int mon, day;
    scanf("%d%d", &mon, &day);
    if(mon == 1){
        if(day >= 21){
            printf("Aquarius\n");
        }else{
            printf("Capricorn\n");
        }
    }else if(mon == 2){
        if(day >= 19){
            printf("Pisces\n");
        }else{
            printf("Aquarius\n");
        }
    }else if(mon == 3){
        if(day >= 21){
            printf("Aries\n");
        }else{
            printf("Pisces\n");
        }
    }else if(mon == 4){
        if(day >= 21){
            printf("Taurus\n");
        }else{
            printf("Aries\n");
        }
    }else if(mon == 5){
        if(day >= 22){
            printf("Gemini\n");
        }else{
            printf("Taurus\n");
        }
    }else if(mon == 6){
        if(day >= 22){
            printf("Cancer\n");
        }else{
            printf("Gemini\n");
        }
    }else if(mon == 7){
        if(day >= 23){
            printf("Leo\n");
        }else{
            printf("Cancer\n");
        }
    }else if(mon == 8){
        if(day >= 24){
            printf("Virgo\n");
        }else{
            printf("Leo\n");
        }
    }else if(mon == 9){
        if(day >= 24){
            printf("Libra\n");
        }else{
            printf("Virgo\n");
        }
    }else if(mon == 10){
        if(day >= 24){
            printf("Scorpio\n");
        }else{
            printf("Libra\n");
        }
    }else if(mon == 11){
        if(day >= 23){
            printf("Sagittarius\n");
        }else{
            printf("Scorpio\n");
        }
    }else{
        if(day >= 22){
            printf("Capricorn\n");
        }else{
            printf("Sagittarius\n");
        }
    }

    return 0;
}