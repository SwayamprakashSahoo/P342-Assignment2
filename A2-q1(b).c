//program to find the average distance between two points on a 6 by 6 two-dimensional grid
//Distance between each consequetive point is 1 unit
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int count=0;
	float sum = 0.0, avg;
	printf("For a 6x6 two dimensional grid, assuming distance between consequetive points to be 1 unit\n");
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			for (int p = 0; p < 6; p++)
			{
				for (int q = 0; q < 6; q++)
				{
					sum += (abs(p - i) + abs(q - j));
					count++;
				}
			}
		}
	}
	avg = sum / count;
	printf("The possible number of combinations(pairs) are:\n %d\n", count);
	printf("The average distance between two points is :\n %f units", avg);
}





//OUTPUT
/*
For a 6x6 two dimensional grid, assuming distance between consequetive points to be 1 unit
The possible number of combinations(pairs) are:
 1296
The average distance between two points is :
 3.888889 units
 */
