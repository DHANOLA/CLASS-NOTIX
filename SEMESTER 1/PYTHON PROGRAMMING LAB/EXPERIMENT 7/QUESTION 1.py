file=open(input("Enter the number of file: "))


#A) COUNT NO OF NAMES


count=0
for name in file:
    for alphabet in name:
        
        if alphabet=="\n":
            count+=1

            
print("number of names: ",count)


B) COUNT ALL NAMES STARTING WITH VOWEL


count=0
for name in file:
    if(name[0]=='a' or name[0]=='e' or name[0]=='i' or name[0]=='o' or name[0]=='u' or name[0]=='A' or name[0]=='E' or name[0]=='I' or name[0]=='O' or name[0]=='U'):
        count+=1
        
print("number of names starting with vowel: ",count)

C) FIND LONGEST NAME


length=0
for name in file:
    if len(name)>length:
        length=len(name)
        
print("longest name: ",length)
