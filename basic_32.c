#include <stdio.h>
#include <string.h>

int main(){
    char input[101];
    int n;
    fgets(input, 101, stdin);
    scanf("%d", &n);
    for(int i=0; i<strlen(input);i++) {
        int tmp;
        if('A' <= input[i] && 'Z' >= input[i]){
            tmp = (input[i]-'A');
            tmp = (tmp+n)%26;
            printf("%c", tmp+'A');
        } 
        else if('a' <= input[i] && 'z' >= input[i]) {
            tmp = (input[i]-'a');
            tmp = (tmp+n)%26;
            printf("%c", tmp+'a');
        } 
        else if('0' <= input[i] && '9' >= input[i]) {
            tmp = (input[i]-'0');
            tmp = (tmp+n)%10;
            printf("%c", tmp+'0');
        } 
        else {
            printf("%c", input[i]);
        }
    }

    return 0;
}
