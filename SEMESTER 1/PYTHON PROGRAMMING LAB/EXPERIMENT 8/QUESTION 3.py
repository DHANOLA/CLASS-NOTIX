def odd_product(nums):
  for i in range(len(nums)):
    for j in range(len(nums)):
      if  i != j:
        product = nums[i] * nums[j]
        if product & 1:
          return True
          return False
          
n=int(input("enter the number of input:"))
lst=[]

print("enter input:")

for i in range(n):
    lst.append(input("enter the input:"))
print(odd_product(lst));
