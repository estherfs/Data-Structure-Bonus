
#include <stdio.h> 
#include <string.h> 
#include <ctype.h>
/*輸出鍵盤上右移一格的字*/ 
int main(){ 
    char s[1000]; 
    char qwerty[80] = "!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:""asdfghjkl;''<>??zxcvbnm,.//\0"; 
    fgets(s, 1000, stdin); 
    for (int i = 0; s[i] != '\0'; i++){ 
        s[i] = tolower(s[i]); 
        for (int j = 0; qwerty[j]!='\0'; j++){ 
            if(s[i] == ' ') 
                break; 
            else if(s[i] == qwerty[j]){ 
                s[i] = qwerty[j + 1]; 
                break; 
            } 
        } 
    }
    printf("%s", s);
     
    return 0; 
}  
