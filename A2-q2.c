//Program to reate two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice
//(but not random numbers) in the code itself and find A + B and A.B(dot product).

#include <stdio.h>
void main()
{
	int vectA[3] = { 3,5,8 };
	int vectB[3] = { 2,9,6 };
	int sum[3], dotp=0;

	for (int i = 0; i < 3; i++)
	{
		dotp += (vectA[i] * vectB[i]);
		sum[i] = vectA[i] + vectB[i];
	}

	printf("The two vectors include :\nVector A : [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", vectA[i]);
	printf("]\nVector B : [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", vectB[i]);
	printf("]\nThe sum of the vectors is : [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", sum[i]);
	printf("]\nThe dot product is : %d\n", dotp);
}
