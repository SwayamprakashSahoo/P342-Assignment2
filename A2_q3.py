#Create 3x3 matrices M=(a11,a12 … a33) and N=(b11,b12, …, b33) with numbers of choice (zeros, negatives and positives
#but not random numbers) in two separate files, read the matrices from the files and find M x A and M x N

import array as arr

p = open('MatrixM.txt', 'r')
q = open('MatrixN.txt', 'r')

M=[[int(num) for num in line.split(',')] for line in p]
print("Matrix M is :")
print('\n'.join([''.join(['{:6}'.format(item) for item in row]) for row in M]))

N=[[int(num) for num in line.split(',')] for line in q]
print("Matrix N is :")
print('\n'.join([''.join(['{:6}'.format(item) for item in row]) for row in N]))

A=arr.array('i', [3,5,8])

MA=[0]*3
for x in range(3):
    for y in range(3):
        MA[i]+=(M[i][j]*A[j])

print("The matrix multiplication of M and A yields :")
print('\n'.join(['{:6}'.format(item) for item in MA]))

MN=[[0 for j in range(3)] for i in range(3)]
for x in range(3):
    for y in range(3):
        for z in range(3):
            MN[i][j]+=(M[i][k]*N[k][j])

print("The matrix multiplication of M and N yields :")
print('\n'.join([''.join(['{:6}'.format(item) for item in row]) for row in MN]))







#######OUTPUT#####
#Matrix M is : 
#     2     5     4
#     0    -3     8
#     1     7     6
#Matrix N is : 
#     0     1    -5 
#     2    -4     7
#     3     8     9
#The matrix multiplication of M and A yields : 
#    63
#    49
#    86
#The matrix multiplication of M and N yields : 
#    22    14    61
#    18    76    51
#    32    21    98
