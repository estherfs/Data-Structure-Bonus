#include <stdio.h>    
#include <string.h>   
#include <stdlib.h>   
int main(){    
    char t[20];    
    fgets(t, 20, stdin);   
   
    long long n = strtol(t, (char **)NULL, 10);   
    for (long long i = 0; i < n; i++){    
        long long sum = 0;    
           
        char s[40];    
        for(int j=0;j<40;j++) 
            s[j] = '\0';   
           
        fgets(s, 40, stdin);   
        for (int j = 0; s[j] != '\n' && j<strlen(s) && s[j]!= '\r'; j++){    
            sum += s[j];    
        }    
           
        printf("%lld\n", sum);   
    }    
}  
