file=open(input("enter the file name "),"w")
no=int(input("enter the number of students:"))
for i in range(no):
    file.write(input("enter the roll no:")+"\t")
    file.write(input("enter the name:")+"\t")
    file.write(input("enter the marks:")+"\n")

#A) DISPLAY THE DETAILS OF ALL STUDENTS

for words in file:
    print(words)
    
        
B) AVERAGE MARKS IN EACH SUBJECT


for words in file:
    print(words)
    
    
C) AVERAGE MARKS OF ALL STUDENTS



D) FIND TOPPER OF THE CLASS
