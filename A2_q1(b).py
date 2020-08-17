#program to find the average distance between two points on a 6x6 two-dimensional grid
#Distance between each consequetive point is 1 unit

count=0
sum=0.0
avg=0.0
print("For a 6x6 two dimensional grid, assuming distance between any two adjacent points to be 1 unit\n")
for i in range(6):
    for j in range(6):
        for k in range(6):
            for l in range(6):
                sum+=(abs((k+l)-(i+j)))
                count+=1

avg=sum/count
print("The possible number of combinations(pairs) are:\n", count)
print("\nThe average distance between two points in the grid is :\n",avg)
