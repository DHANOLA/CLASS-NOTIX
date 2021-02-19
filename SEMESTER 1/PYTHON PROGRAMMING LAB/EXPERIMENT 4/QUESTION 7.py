count5=0

count7=0

for i in range(1,101):
    if i%5==0:
        count5+=1
    elif i%7==0:
        count7+=1
    else:
    continue
    
   
print("number of digits divisible by 5: ",count5)  


print("number of digits divisible by 7: ",count7)  
