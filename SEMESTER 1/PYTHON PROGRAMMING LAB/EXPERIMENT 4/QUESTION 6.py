n=int(input("Enter a number:"))


summ=0


while(n>0):
    digit=n%10
    summ+=digit
    n=n//10


print("The total sum of digits is:",summ)
