#include<stdio.h>  
  
  
int main(){   
    long long arr[7];
    long long sum = 0;
    for(int i=0; i<6; i++){   
        scanf("%lld", &arr[i]);   
    }   
    for (int i = 0; i < 6; i++){
        sum += arr[i]*arr[i]*arr[i];
    }   
    printf("%lld\n",sum);  
    return 0;   
}  
