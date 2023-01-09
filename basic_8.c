#include <stdio.h>
int main(){
    int n, i=2;
    scanf("%d", &n);
    if(n==1){
        printf("NO\n");
        return 0;
    }
    while(i<n){
        if(n%i == 0){
            printf("NO\n");
            return 0;
        }
        i++;
    }

    printf("YES\n");
    return 0;
}