#include <stdio.h>
int main(){
    int n;
    char op;
    int a1, b1, a2, b2;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        op = getchar();
        op = getchar();//\r
        op = getchar();
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
        if(op == '+'){
            printf("%d %d\n", a1 + a2, b1 + b2);
        }
        else if (op == '-'){
            printf("%d %d\n", a1 - a2, b1 - b2);
        }
        else{
            printf("%d %d\n", a1 * a2 - b1 * b2, a1 * b2 + b1 * a2);
        }
    }
    

    return 0;
}