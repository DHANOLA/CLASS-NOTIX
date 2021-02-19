words=input("enter the sentence: ")


unique = []


for word in words:
    if word not in unique:
        unique.append(word)
        
        
   print("unique words are: ",unique)  
   
   
   
