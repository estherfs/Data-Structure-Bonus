#include <stdio.h>
int main(){
    int mon;
    scanf("%d", &mon);
    if(mon<=5 && mon>=3){
        printf("Spring\n");
    }
    else if(mon<=8 && mon>=6){
        printf("Summer\n");
    }
    else if(mon<=11 && mon>=9){
        printf("Autumn\n");
    }
    else{
        printf("Winter\n");
    }

    return 0;
}