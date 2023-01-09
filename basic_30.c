#include <stdio.h>
int main(){
    int mon, day;
    scanf("%d %d", &mon, &day);
    int code = mon * 100 + day;
    if(code >= 121 && code <= 218){
        printf("Aquarius\n");
    }
    else if(code >= 219 && code <= 320){
        printf("Pisces\n");
    }
    else if(code >= 321 && code <= 420){
        printf("Aries\n");
    }
    else if(code >= 421 && code <= 521){
        printf("Taurus\n");
    }
    else if(code >= 522 && code <= 621){
        printf("Gemini\n");
    }
    else if(code >= 622 && code <= 722){
        printf("Cancer\n");
    }
    else if(code >= 723 && code <= 823){
        printf("Leo\n");
    }
    else if(code >= 824 && code <= 923){
        printf("Virgo\n");
    }
    else if(code >= 924 && code <= 1023){
        printf("Libra\n");
    }
    else if(code >= 1024 && code <= 1122){
        printf("Scorpio\n");
    }
    else if(code >= 1123 && code <= 1221){
        printf("Sagittarius\n");
    }
    else{
        printf("Capricorn\n");
    }

    return 0;
}