#include <stdio.h>
#include <string.h>

int main(){
    int a1;
    int a2;
    while(scanf("%d %d", &a1, &a2) != EOF){
        if(a2==1) {
            printf("%.1lf\n", (a1-80)*0.7);
        } else {
            printf("%.1lf\n", (a1-70)*0.6);
        }
    }
    return 0;
}
