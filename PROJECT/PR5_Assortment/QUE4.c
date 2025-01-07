#include <stdio.h>

int main() {
    int row, col, i, j, row_n, col_n, row_sum = 0, col_sum = 0;

    printf("Enter the array row : ");
    scanf("%d", &row);
    printf("Enter the array column : ");
    scanf("%d", &col);

    int arr[row][col];

    printf("Enter array elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter row number: ");
    scanf("%d", &row_n);


    printf("Elements of row %d: ", row_n);
    for (j = 0; j < col; j++) {
        printf("%d, ", arr[row_n][j]);
        row_sum += arr[row_n][j];
    }
    printf("\nThe sum of a row %d: %d\n", row_n, row_sum);


    printf("Enter column number: ");
    scanf("%d", &col_n);


    printf("Elements of column %d: ", col_n);
    for (i = 0; i < row; i++) {
        printf("%d, ", arr[i][col_n]);
        col_sum += arr[i][col_n];
    }
    printf("\nThe sum of column %d: %d\n", col_n, col_sum);


}

