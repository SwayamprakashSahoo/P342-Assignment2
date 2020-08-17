#Program to create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice
#(but not random numbers) in the code itself and to find A+B and A.B (dot product).

vectA = [3, 5, 8] 
vectB = [7, -4, 9] 
sum = []
product=[]
dotp=0
for num1,num2 in zip(vectA,vectB):
    sum.append(num1+num2)
    product.append(num1*num2)
    
for num in range(3): 
    dotp = dotp + product[num]

print("The vectors include:\nVector A :")
print("[",*vectA,"]")
print("\nVector B :")
print("[",*vectB,"]")
print("\nThe sum of the two vectors is :")
print("[",*sum,"]")
print("\nThe dot product is :", dotp,"\n")




########OUTPUT#######
#The vectors include:
#Vector A :
#[ 3 5 8 ]
#
#Vector B :
#[ 7 -4 9 ]
#
#The sum of the two vectors is :
#[ 10 1 17 ]
#
#The dot product is : 73
#
