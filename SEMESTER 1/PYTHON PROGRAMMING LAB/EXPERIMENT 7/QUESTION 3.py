file=open(input("enter the file name "),"w")
n=int(input("enter the number of students:"))
for i in range(n):
    file.write(input("enter the name:")+"\t")
    file.write(input("enter the roll no:")+"\t")
    file.write(input("enter the physics marks:")+"\t")
    file.write(input("enter the chemistry marks:")+"\t")
    file.write(input("enter the maths marks:")+"\n")

#A) DISPLAY THE DETAILS OF ALL STUDENTS

for detail in file:
    print(detail)
    
        
B) AVERAGE MARKS IN EACH SUBJECT

avgp=0
avgc=0
avgm=0
no=n
while(True):
    if no>0:
        temp=file.readline()
        l=temp.readlines()
        avgp+=l[2]
        avgc+=l[3]
        avgm+=l[4]
        no-=1
    else:
        break;
avgp/=n
avgc/=n
avgm/=n

print("average of physics marks",avgp)
print("average of chemistry marks",avgc)
print("average of maths marks",avgm)
    
C) AVERAGE MARKS OF ALL STUDENTS

avg=0
no=n
while(True):
    if no>0:
        temp=file.readline()
        l=temp.readlines()
        avg=l[2]+l[3]+l[4]
        print("average marks of",no,"student: ",avg/3)
        no-=1
    else:
        break;

D) FIND TOPPER OF THE CLASS

avg=0
no=n
l=[]
while(True):
    if no>0:
        temp=file.readline()
        l=temp.readlines()
        avg=l[2]+l[3]+l[4]
        l.append(avg/3)
        no-=1
    else:
        break;

l.sort()        
print("topper student: ",l[len(l)])








