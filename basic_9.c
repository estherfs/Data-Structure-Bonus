#include <stdio.h>
int main(){
    int sum = 0, n;
    scanf("%d", &n);
    for (int i = 3; i <= n; i+=3){
        sum += i;
    }
    printf("%d\n", sum);

    return 0;
}