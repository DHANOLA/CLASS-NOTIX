Class Student:
  
  def setname(self,name):
    self.name=name
    
    
   def setsap(self,sap):
    self.sap=sap
    
    
   def setrollno(self,rollno):
    self.rollno=rollno
   
  
  def getname(self):
    return self.name
  
  def getsap(self):
    return self.sap
  
  def getrollno(self):
    return self.rollno
  
student1=Student()

student2=Student()

student3=Student()

print("Student 1: \nEnter Name:",student1.setname(),"\nEnter SAP ID:",student1.setsap(),"\nEnter Roll No:",student1.setrollno())


print("Student 2: \nEnter Name:",student2.setname(),"\nEnter SAP ID:",student2.setsap(),"\nEnter Roll No:",student2.setrollno())


print("Student 3: \nEnter Name:",student3.setname(),"\nEnter SAP ID:",student3.setsap(),"\nEnter Roll No:",student3.setrollno())


print("Student 1: \nName:",student1.getname(),"\nSAP ID:",student1.getsap(),"\nRoll No:",student1.getrollno())


print("Student 2: \nName:",student2.getname(),"\nSAP ID:",student2.getsap(),"\nRoll No:",student2.getrollno())


print("Student 3: \nName:",student3.getname(),"\nSAP ID:",student3.getsap(),"\nRoll No:",student3.getrollno())
