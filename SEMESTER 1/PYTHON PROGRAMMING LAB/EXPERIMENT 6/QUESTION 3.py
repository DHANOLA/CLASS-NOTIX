d=dict()


num = int(input("Enter the number of movies to be inserted: ")) 


for j in range(n):
    mov = input("Enter name of movie: ")  
        if mov in d.keys():
            print("movie already exist !!!")
        else:
            d[mov]=[]
            d[mov].append(input("Enter year of movie: "))
            d[mov].append(input("Enter director name of movie: "))
            d[mov].append(input("Enter production cost of movie: "))
            d[mov].append(input("Enter collection made (earning) of movie: "))


#A) PRINT ALL MOVIE DETAILS


for i in d.keys():
    print("movie name: ",i)
    print("movie year: ",d[i][0])
    print("movie director name: ",d[i][1])
    print("movie production cost: ",d[i][2])
    print("movie collection made (earning): ",d[i][3])
    
    
#B) DISPLAY NAME OF MOVIES RELEASED BEFORE 2015


for j in d:
    if d[j][0]<2015:
        print("movie name: ",j)


#C) PRINT MOVIES THAT MADE A PROFIT.


for j in d:
    if d[j][2]<d[j][3]:
        print("movie name: ",j)
        
        
#D) PRINT MOVIES THAT MADE A LOSS.
for j in d:
    if d[j][2]>d[j][3]:
        print("movie name: ",j)
        

#E) PRINT MOVIES DIRECTED BY A PARTICULAR DIRECTOR.


name=input("Enter name of director: ")
for j in d:
    if d[j][1]==name:
        print("movie name: ",j)
