#include <stdio.h>
void sort(int *, int);
int main(){
    int n, t, m, k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d %d %d", &t, &m, &k);

        int price[100] = {0};
        for (int j = 0; j < k; j++){
            scanf("%d", &price[j]);
        }
        sort(price, k);
        int sum = 0;
        for (int j = 0; j<m; j++){
            sum += price[j];
        }
        if(sum>t){
            printf("Impossible\n");
        }
        else{
            printf("%d\n", sum);
        }
    }
    
}
void sort(int *p, int k){
    for (int i = 0; i < k; i++){
        int min = i;
        for (int j = i+1; j < k; j++){
            if(p[j]<p[min])
                min = j;
        }

        int tmp = p[min];
        p[min] = p[i];
        p[i] = tmp;
    }
}