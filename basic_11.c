#include <stdio.h>
//transpose a matrix
int main(){
    int row, col;
    while(scanf("%d %d", &row, &col)!=EOF){
        int matrix[row][col];
        for(int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                scanf("%d", &matrix[i][j]);
            }
        }

        int matrix2[col][row];
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                matrix2[j][i] = matrix[i][j];
            }
        }

        for(int i = 0; i < col; i++){
            for(int j = 0; j < row; j++){
                if(j != row-1)
                    printf("%d ", matrix2[i][j]);
                else
                    printf("%d\n", matrix2[i][j]);
            }
        }
    }

    return 0;
}

