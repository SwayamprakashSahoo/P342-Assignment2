#Program to create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice
#(but not random numbers) in the code itself and to find A+B and A.B (dot product).

vectA = [2, -5, 7] 
vectB = [8, 4, 9] 
sum = []
product=[]
dotp=0
for num1,num2 in zip(vectA,vectB):
    sum.append(num1+num2)
    product.append(num1*num2)
    
for num in range(3): 
    dotp = dotp + product[num]

print("The vectors include:\nVector A :", vectA,"\nVector B :", vectB)
print("\nThe sum of the two vectors is :", sum)
print("\nThe dot product is :", dotp,"\n")
