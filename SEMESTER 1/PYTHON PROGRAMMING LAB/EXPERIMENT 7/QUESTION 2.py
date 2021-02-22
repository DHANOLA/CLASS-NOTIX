file=open(input("enter the file name "),"r")

#A) FIND THE MAX NUMBER

larg=0
for integer in file:
    if integer>larg:
        larg=integer
        
print("maximum number: ",larg)

B) FIND AVERAGE OF ALL NUMBERS


avg=0
count=0

for integer in file:
    avg+=integer
    count+=1
    
avg=avg/count

print("average of number: ",avg)

C) COUNT NUMBER OF NUMBERS GREATER THAN 100


count=0
for integer in file:
    if integer>100:
        count+=1

print("number of numbers greater than 100: ",count)
