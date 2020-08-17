//program to find the average distance between two points on a straight line made of N(=6) discrete points
//distance between any two consequetive points on the line has been taken to be 3 units
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int n, line[6], count=0;
	float avg, sum=0.0;
	printf("The line has 6 points.\n Distance between any two consequetive points on the line has been taken to be 3 units.\n");
	
	
	for (int i = 0; i < 6; i++)
		line[i] = i + 1;

	for (n = 1; n < 7; n++)
	{
		for (int j = 0; j < 6; j++)
		{
			sum += 3 * (abs(line[n - 1] - line[j]));
			count++;
		}
	}

	avg = sum / count;
	printf("The possible number of combinations(pairs) are:\n %d\n", count);
	printf("The average distance between two points on the straight line is:\n %f units", avg);
}





//OUTPUT
/*
The line has 6 points.
 Distance between any two consequetive points on the line has been taken to be 3 units.
The possible number of combinations(pairs) are:
 36
The average distance between two points on the straight line is:
 5.833333 units
 */
