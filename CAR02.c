#include<stdio.h>  
  
int main(){   
    long long arr[7];   
    for(int i=0; i<6; i++){   
        scanf("%lld", &arr[i]);   
    }   
    for (int i = 5; i >= 0; i--){   
        if(i!=5) printf(" ");  
        printf("%lld", arr[i]);  
    }   
    printf("\n"); 
    return 0;
}  
