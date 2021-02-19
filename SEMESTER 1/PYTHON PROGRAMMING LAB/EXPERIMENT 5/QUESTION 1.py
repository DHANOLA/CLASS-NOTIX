string=raw_input("Enter string:")


count=0


for i in string:
      if(i.isupper()):
            count=count+1


print("The number of uppercase characters is:")
print(count)
