#include <stdio.h>
int main(){
    int N, a, b, c, change;
    int n1 = 0, n2 = 0, n3 = 0;
    scanf("%d,%d,%d,%d", &N, &a, &b, &c);
    change = N - 15 * a - 20 * b - 30 * c;

    if(change < 0){
        printf("0\n");
    }
    else{
        n3 = change / 50;
        change = change % 50;
        n2 = change / 5;
        n1 = change % 5;
        printf("%d,%d,%d\n", n1, n2, n3);
    } 
    
    return 0;
}