#include <stdio.h>
#include <string.h>

int count(char *, const char *);
int main(){
    long long n, sum = 0;
    int winner[10] = {0};
    int prize[10] = {2000000, 200000, 40000, 10000, 4000, 1000, 200, 0, 0, 0};
    char sp[10], p1[10], p2[10], p3[10];
    scanf("%s", sp);
    scanf("%s", p1);
    scanf("%s", p2);
    scanf("%s", p3);
    scanf("%lld", &n);
    for (int i = 0; i < n; i++){
        char user[10];
        scanf("%s", user);
        if(strcmp(user, sp) == 0){
            winner[0]++;
            sum += prize[0];
        }
        else{
            int count1 = count(p1, user);
            int count2 = count(p2, user);
            int count3 = count(p3, user);
            
            int max = count1;
            if(count2 > max )
                max = count2;
            if(count3 > max)
                max = count3;
            
            if(max){
                winner[9-max]++;
                sum += prize[9-max];
            }
        }
    }

    for (int i = 0; i < 7; i++){
        if(i == 6){
            printf("%d", winner[i]);
        }
        else{
            printf("%d ", winner[i]);
        }
    }
    printf("\n%lld\n", sum);

    return 0;
}

int count(char *p, const char *user){
    int counter = 0;
    for (int j = 7; j >= 0; j--){
        if(p[j] != user[j]){
            break;
        }
        counter++;
    }

    return counter;
}