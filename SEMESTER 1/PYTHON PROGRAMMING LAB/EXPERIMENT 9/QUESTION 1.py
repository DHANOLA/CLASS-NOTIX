class Student:

	def __init__(self, rno, name, cgpa):
		self.rno= rno
		self.name= name
		self.cgpa= cgpa

	def display(self):
		print(self.rno , "is", self.name, "and has", self.cgpa, "CGPA.\n")

students_list= []
n= int( input("Number of Students: ") )

for i in range(n):

	input_rno= int( input("Enter Roll Number: ") )
	input_name= input("Enter name: ")
	input_cgpa= float( input("Enter CGPA: ") )

	student_obj= Student(input_rno, input_name, input_cgpa)
	students_list.append(student_obj)

	print()

for student in students_list: student.display()

