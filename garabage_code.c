#include <stdio.h>
int main()
{
    int m, n, p, q, c, d, k;

    printf("Enter the row and columns of the first matrix:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the row and columns of the second matrix:\n");
    scanf("%d%d", &p, &q);

    int matrix1[m][n], matrix2[p][q], multiply[m][q];

    printf("Enter the first matrix:\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &matrix1[c][d]);
        }
    }

    if (n != p)
        printf("Matrix with this order can not be multiplied by each other!!\n");
    else
    {
        printf("Enter the second matrix.\n");
        for (c = 0; c < p; c++)
        {
            for (d = 0; d < q; d++)
            {
                scanf("%d", &matrix2[c][d]);
            }
        }

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {

                multiply[c][d] = 0;
            }
        }

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                for (k = 0; k < m; k++)
                {
                    multiply[c][d] += matrix1[c][k] * matrix2[k][d];
                }
            }
        }

        printf("The product of the matrix:\n");
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {

                printf("%d\t", multiply[c][d]);
            }
            printf("\n");
        }
    }
}
