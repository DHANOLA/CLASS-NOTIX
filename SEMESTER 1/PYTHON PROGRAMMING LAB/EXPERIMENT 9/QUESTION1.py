Class Student:
  def __init__(self,name,sap,rollno):
    self.name=name
    self.sap=sap
    self.rollno=rollno
   
  
  def getname(self):
    return self.name
  
  def getsap(self):
    return self.sap
  
  def getrollno(self):
    return self.rollno
  
student1=Student("Rahul",500074515,R177451248)

student2=Student("Rohan",500074458,R177451854)

student3=Student("Shivam",500078741,R177451965)

print("Student 1: \nName:",student1.getname(),"\nSAP ID:",student1.getsap(),"\nRoll No:",student1.getrollno())


print("Student 2: \nName:",student2.getname(),"\nSAP ID:",student2.getsap(),"\nRoll No:",student2.getrollno())


print("Student 3: \nName:",student3.getname(),"\nSAP ID:",student3.getsap(),"\nRoll No:",student3.getrollno())
