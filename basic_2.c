#include <stdio.h>
#include <stdlib.h>

int main(){
    //英哩轉公里
    int len;
    scanf("%d", &len);
    double new_len = len*1.6;
    //固定取到小數後一位
    printf("%.1lf\n", new_len);

    return 0;
}