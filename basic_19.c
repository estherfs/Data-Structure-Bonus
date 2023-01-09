#include <stdio.h>
/*最大派車數*/
int main(){
    int n;
    int start[40];
    int end[40];
    int time[25];
    for (int i = 0; i < 25; i++)
        time[i] = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d %d", &start[i], &end[i]);
        for (int j = start[i]; j < end[i]; j++){
            time[j]++;
        }
    }
    //計算每個小時同時需要多少車，取最多者
    int max = time[0];
    for (int i = 1; i < 25; i++){
        if(max<time[i])
            max = time[i];
    }
    printf("%d\n", max);

    return 0;
}