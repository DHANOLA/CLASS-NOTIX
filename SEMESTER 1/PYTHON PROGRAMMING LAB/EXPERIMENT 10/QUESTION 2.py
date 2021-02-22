import numpy as np
x = np.array([[0,1],[2,3],[4,5])
print("Original array:")
print(x)

print("Sum of each column:")
print(np.sum(x, axis=0))
print("Sum of each row:")
print(np.sum(x, axis=1))

l=list(x)
l.sort()

print("second largest :",l[len(l)-1])
