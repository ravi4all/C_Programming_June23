#include<stdio.h>

int main() {
    // int arr[] = {1,2,3,4,5,6};
    // int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // int arr[3][5] = {{1,2,3,56,33}, {4,5,6,12,1}, {7,8,9,12,5}};

    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    // arr[0] - {1,2,3}
    // arr[1] - {4,5,6}
    // arr[0][0] - 1
    // arr[0][2] - 3

    int row = 3;
    int col = 3;
    // for(int i = 0; i < row; i++) {
    //     for(int j = 0; j < col; j++) {
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
 
}