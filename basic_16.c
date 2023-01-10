#include <stdio.h>  
#include <string.h>

int countOccurrences(char s1[1000], char s2[1000]) {  
  int count = 0;  
  char* pos = s2;
  while (1) {  
    pos = strstr(pos, s1); //從pos中找s1，回傳指標或null
    if (pos != NULL) { 
      count++;  
      pos++; //Move to the next character after the occurrence of s1 in s2  
    } else {
        break;
    }
    
  }  
  return count;  
}  
  
int main() {  
  char s1[1000];  
  char s2[1000];  
  scanf("%s", s1);
  scanf("%s", s2);
  int ans = countOccurrences(s1, s2);
  printf("%d\n", ans);  
  
  return 0;  
}  
