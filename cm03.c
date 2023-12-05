#include <stdio.h>

int main(){
    int firstMatrix[3][3], secondMatrix[3][3], resultMatrix[3][3];
    printf("Enter elements of the first matrix (3x3):\n");
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("Enter elements of the second matrix (3x3):\n");
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            resultMatrix[i][j] = 0;
            for (int k = 0; k < 3; ++k)
            {
                resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            printf("%d ", resultMatrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
       printf("Amit IT 3 11776803122\n");
}