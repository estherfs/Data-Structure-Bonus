#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int alpha[26] = {0};
    char str[1000];
    fgets(str, 1000, stdin);
    
    int num = 1;
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == ' ')
            num++;
        else if (str[i] != ',' && str[i] != '.')
            alpha[tolower(str[i]) - 'a']++;
    }

    printf("%d\n", num);
    for (int j = 0; j < 26; j++){
        if(alpha[j] != 0)
            printf("%c : %d\n", (char)(j + 'a'), alpha[j]);
    }

    return 0;
}