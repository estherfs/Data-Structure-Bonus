#include <stdio.h>
#include <string.h>

int main(){
    char ans[5];
    scanf("%s", ans);
    char guess[5];
    scanf("%s", guess);
    int num1[10] = {0};
    for (int i = 0; i < 4; i++){
        num1[ans[i] - '0']++;
    }

    while (strcmp(guess, "0000") != 0)
    {
        int a = 0, b = 0;
        int num2[10] = {0};
        for (int i = 0; i < 4; i++){
            num2[guess[i] - '0']++;
        }
        for (int i = 0; i < 10; i++){
            if(num2[i] >= num1[i])
                b+=num1[i];
        }
        for (int i = 0; i < 4; i++){
            if(ans[i] == guess[i]){
                a++;
                b--;
            }
        }

        printf("%dA%dB\n", a, b);
        scanf("%s", guess);
    }

    return 0;
}