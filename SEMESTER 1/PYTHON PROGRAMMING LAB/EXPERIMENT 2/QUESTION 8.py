
x = int(input("enter number 1"))
y = int(input("enter number 2"))


if x > y:
       greater = x
   else:
       greater = y

while(true):
    if((greater % x == 0) and (greater % y == 0)):
        lcm = greater
        break
    greater += 1


print("the l.c.m. is",lcm)
