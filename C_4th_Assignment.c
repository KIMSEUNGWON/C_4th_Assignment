//find transpose of a matrix

#include<stdio.h>

int main(void)
{
	int a[10][10], transpose[10][10], rows, columns, i, j;
	printf("Enter rows and columns of matrix: ");
	scanf("%d%d", &rows, &columns);

	//storing elements of the matrix
	printf("\nEnter elements of matrix:\n");
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < columns; j++)
		{
			printf("Enter element a%d%d ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEntered Matrix:\n");

	for (i = 0; i < rows; ++i)
	{
		
			for (j = 0; j < columns; j++)
			{
				printf("%d ", a[i][j]);
				if (j == columns - 1)
					printf("\n");
			}
		
	}

	//find tranpose of matirx
	for (i = 0; i < columns; ++i)
	{
		for (j = 0; j < rows; ++j)
		{
			transpose[i][j] = a[j][i];
		}
	}

	printf("\nTranpose of Matrix\n");

	for (i = 0; i < columns; ++i)
	{

		for (j = 0; j < rows; j++)
		{
			printf("%d ", transpose[i][j]);
			if (j == rows - 1)
				printf("\n");
		}

	}

	return 0;

}