#include<stdio.h>

int main() {
    int arr_1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int arr_2[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int arr_3[3][3];

    int row = 3;
    int col = 3;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr_3[i][j]);
        }
        printf("\n");
    }
 
}