#include <stdio.h>
//輾轉相除法求最大公因數
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    while(a!=0 && b!=0){
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0){
        printf("%d\n", b);
    }
    else{
        printf("%d\n", a);
    }

    return 0;
}