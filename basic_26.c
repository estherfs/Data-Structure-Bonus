#include <stdio.h> 
#include <stdlib.h>
 
struct number{ 
    int origin_value; 
    int value; 
}; 

int cmp(const void * a, const void * b) { 
    struct number* aa = (struct number*)a;
    struct number* bb = (struct number*)b;
    if(aa->value == bb->value) { 
        return aa->origin_value - bb->origin_value; 
    } else { 
        return aa->value - bb->value; 
    } 
}
    
/*比較數字和大小*/ 
int main(){ 
    int n; 
    scanf("%d", &n);
 
    struct number set[n]; 
    for (int i = 0; i < n; i++){ 
        scanf("%d", &set[i].origin_value); 

        set[i].value = 0;
        int tmp = set[i].origin_value;
        while(tmp) {
            set[i].value += tmp%10;
            tmp/=10;
        }
    } 
 
 
    qsort(set, n , sizeof(struct number), cmp ); 
 
 
    for (int i = 0; i < n; i++){ 
        if(i){ 
            printf(" "); 
        } 
        printf("%d", set[i].origin_value);
    } 
    printf("\n"); 
    return 0; 
}  
