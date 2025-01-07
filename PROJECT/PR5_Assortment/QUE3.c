#include<stdio.h>

int main()
{
    int i,j,number;

    printf("Enter Rows and Columns:");
    scanf("%d", &number);

    int arr[number][number],  transpose[number][number];

    printf("Enter Array's Elements:\n");
    for (i = 0; i < number; i++)
    {
       for (j = 0; j < number; j++)
       {
        printf("a[%d][%d] = ", i, j);
        scanf("%d", &arr[i][j]);
       }
       
    }

    for (i = 0; i < number; i++)
    {
       for (j = 0; j < number; j++)
       {
       transpose[j][i] = arr[i][j];
       }
       
    }
    
    printf("Transpose Matrix:\n");
    for (i = 0; i < number; i++)
    {
        for (j = 0; j < number; j++)
        {
            printf("%d", transpose[i][j]);
        }
         printf("\n");
    }
}

