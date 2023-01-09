#include <stdio.h>
#include <string.h>

int main(){
    char s[1000];
    while(scanf("%s", s) != EOF){
        int i = 0;
        for(; i<strlen(s)/2; i++){
            if(s[i] != s[strlen(s)-1-i]){
                printf("NO\n");
                break;
            }
        }
        if(i == strlen(s)/2)
            printf("YES\n");
    }
    
    return 0;
}
