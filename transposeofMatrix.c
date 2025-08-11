#include<stdio.h>
int main()
{
    int r1;
    int c1;
    printf("enter number of rows matrix: ");
    scanf("%d",&r1);
     printf("enter number ofcolumns matrix: ");
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

        int tra[c1][r1];

        for(int i = 0 ; i<r1;i++)
        {
            for(int j = 0; j<c1 ; j++)
            {
                tra[j][i] = m1[i][j];
            }
        }

        for(int i = 0; i<c1; i++)
        {
            for(int j = 0 ; j<r1;j++)
            {
                printf("%d ",tra[i][j]);
            }
            printf("\n");
        }

    return 0;
}