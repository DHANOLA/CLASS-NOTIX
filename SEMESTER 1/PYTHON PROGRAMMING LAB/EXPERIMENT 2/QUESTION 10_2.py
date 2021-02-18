n = int (input ("enter the number of rows: ")) 


spaces = n - 1 

for rows in range (0, n):
    for col in range (0, spaces):
        print (end = " ")
    
    spaces -= 1 
    
    for col in range (0, rows + 1):
        print ("A ", end = "")
        
    print ("\n)
