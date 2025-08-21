#include<stdio.h>
int main()
{
    int r1;
    int c1;
    printf("enter number of rows of matrix: ");
    scanf("%d",&r1);
    printf("enter number of columns of matrix: ");
    scanf("%d",&c1);

        int m1[r1][c1];

        printf("Enter elements in matrix:");
        printf("\n");
        for(int i = 0; i < r1; i++)
        {
            for(int j = 0;j<c1; j++)
            {
                printf("Enter element at position (%d,%d): ",i,j);
                scanf("%d",&m1[i][j]);

            }
        }

    for(int i = 0; i < r1; i++) {
        int rows = 0;
        for(int j = 0; j < c1; j++) {
            rows=rows + m1[i][j];
        }
        printf("Sum of row %d: %d\n", i+1, rows);
    }

    for(int j = 0; j < c1; j++) {
        int cols = 0;
        for(int i = 0; i < r1; i++) {
            cols =cols + m1[i][j];
        }
        printf("Sum of column %d: %d\n", j+1, cols);
    }

    return 0;
}