#include <stdio.h>

int i,j;
void findCubes(int **arr, int rows, int cols) {
    printf("Cubes of all elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            int cube = (*(*(arr + i) + j)) * (*(*(arr + i) + j)) * (*(*(arr + i) + j));
            printf("%d ", cube);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    printf("Enter array's size: ");
    scanf("%d", &rows);
    cols = rows;
    int **arr = (int **)malloc(rows * sizeof(int *));
    for (i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    printf("Enter array elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    
    findCubes(arr, rows, cols);

    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
