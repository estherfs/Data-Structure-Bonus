#include <stdio.h>
#include <stdlib.h>
int main(){
    float num[10];
    scanf("%f", &num[0]);
    float max = num[0], min = num[0];

    for (int i = 1; i < 10; i++){
        scanf("%f", &num[i]);
        if(num[i] > max)
            max = num[i];
        if(num[i] < min)
            min = num[i];
    }

    printf("maximum:%.2f\n", max);
    printf("minimum:%.2f\n", min);

    return 0;
}