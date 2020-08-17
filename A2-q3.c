//Create 3x3 matrices M=(a11,a12 … a33) and N=(b11,b12, …, b33) with numbers of choice(zeros, negatives and positives 
//but not random numbers) in two separate files, read the matrices from the files and find M x A and M x N

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int M[3][3];
	int N[3][3];
	FILE *temp1 = fopen("MatrixM.txt","r");
	if (temp1 == NULL)
		exit(1);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(temp1, "%d ", &M[i][j]);
		}
	}
	printf("Matrix M is :\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}

	FILE* temp2 = fopen("MatrixN.txt", "r");
	if (temp2 == NULL)
		exit(1);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(temp2, "%d ", &N[i][j]);
		}
	}
	printf("\nMatrix N is :\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", N[i][j]);
		}
		printf("\n");
	}

	int A[] = { 3,5,8 };
	int MA[3] = { 0,0,0 };
	int MN[3][3];

	printf("\nThe product MxA is given by :\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MA[i] += (A[j] * M[i][j]);
		}
		printf("%d\n", MA[i]);
	}

	printf("\nThe matrix multiplication  of M and N yields:\n ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MN[i][j] = 0;
			for (int k = 0; k < 3; k++)
				MN[i][j] = MN[i][j] + M[i][k] * N[k][j];
			printf("%d ", MN[i][j]);
		}
		printf("\n");
	}
}