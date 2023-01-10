 
//印出四位數  
#include <stdio.h>  
#include <string.h>  

int main(){  
    char str[5];  
    int num[4];  
    scanf("%s", str);  
    for (int i = 0; i < 4; i++){  
        num[i] = (str[i] - '0');  
    }  
  
    char table[10][30];  
    strcpy(table[0], "******   **   **   ******");  
    strcpy(table[1], "    *    *    *    *    *");  
    strcpy(table[2], "*****    *******    *****");  
    strcpy(table[3], "*****    ******    ******");  
    strcpy(table[4], "*   **   ******    *    *");  
    strcpy(table[5], "******    *****    ******");  
    strcpy(table[6], "*    *    ******   ******");  
    strcpy(table[7], "*****    *    *    *    *");  
    strcpy(table[8], "******   *******   ******");  
    strcpy(table[9], "******   ******    *    *");  
  
    for (int i = 0; i < 5; i++){  
        for (int j = 0; j < 4; j++){
            if(j){
                printf(" ");
            }
            int k = 0;
            while(k!=5){  
                printf("%c", table[num[j]][i * 5 + k]);  
                k++;  
            }  
              
        }  
          
        printf("\n");  
    }  
  
    return 0;  
}  
