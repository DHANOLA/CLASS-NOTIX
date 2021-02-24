A)              1
               1 2
              1 2 3
             1 2 3 4
             
                
                
n = int (input ("enter the number of rows: ")) 


spaces = n - 1 

for rows in range (0, n):
    for col in range (0, spaces):
        print (end = " ")
    
    spaces -= 1 
    
    for col in range (0, rows + 1):
        print (col+1, end = "")
        
    print ("\n")

    
    
    
    
B)              A
              A A A
            A A A A A

        



n = int (input ("enter the number of rows: ")) 


spaces = n - 1 

for rows in range (0, n):
    for col in range (0, spaces):
        print (end = " ")
    
    spaces -= 1 
    
    for col in range (0, rows + 1):
        print ("A ", end = "")
        
    print ("\n")
