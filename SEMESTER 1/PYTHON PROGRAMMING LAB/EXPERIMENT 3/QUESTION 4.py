sec=int(input("enter the seconds: "))

h=sec//60

sec%=60

min=sec//60

sec=sec%60

print("the time after conversion is:\n Hours: ",h,"Minutes: ",min,"Seconds: ",sec)
