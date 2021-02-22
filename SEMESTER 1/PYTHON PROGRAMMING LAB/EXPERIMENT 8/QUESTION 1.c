def max_min(data):
  l = data[0]
  s = data[0]
  for num in data:
    if num> l:
      l = num
    elif num< s:
        s = num
  print("largest:",l,"\n smallest:",s)


n=int(input("enter the number of input:"))
lst=[]

print("enter input:")

for i in range(n):
    lst.append(input("enter the input:"))
print(max_min(lst))
