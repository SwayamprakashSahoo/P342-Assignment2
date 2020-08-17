#Program to find the average distance between two points in a line of N(=6) discrete points
print("The line consists of 6 discrete points.\n")
print("Distance between any two adjacent points has been taken as 1 unit.\n")
sum = 0.0
avg = 0.0
count=0
for x in range(6):
    for y in range(6):
        sum+=(abs(x-y))
        count+=1

avg=sum/count
print("The possible number of combinations(pairs) are:\n", count)
print("\nThe average distance between any two points is:\n", avg)
