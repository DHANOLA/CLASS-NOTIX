d=dict()


for i in range(3):
    num = int(input("Enter the number of values to be inserted: "))  
    for j in range(n):
        val = int(input("Enter a number: "))  
        if val in d.keys():
            d[val]+=1
        else:
            d[val]=1
            
            
print("the number of times each value has occurred: ")


for i in d.keys():
    print(i,": ",d[i])
    
    
    
