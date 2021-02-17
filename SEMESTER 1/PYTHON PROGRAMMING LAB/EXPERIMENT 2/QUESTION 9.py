x=float(input("enter the number 1:"))
y=float(input("enter the number 2:"))


if x > y: 
        least = y 
    else: 
        least = x 
    for i in range(1, least+1): 
        if((x % i == 0) and (y % i == 0)): 
            gcd = i 
               
print ("The gcd of"x,"and",y"is: ",gcd,end="") 
 
