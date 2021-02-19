n=int(input("Enter number:"))


temp=n


palin=0


while(n>0):
    dig=n%10
    palin=palin*10+dig
    n=n//10


if(temp==palin):
    print("The number is a palindrome!")
else:
    print("The number isn't a palindrome!")
