#include <stdio.h>
int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    if(x*x + y*y > 10000){
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }

    return 0;
}