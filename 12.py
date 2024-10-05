sum=0
credits=0
p=int(input("Enter total subjects:"))
while(p):
    n=input("Enter grade:")
    m=int(input("Enter credit:"))
    if(n=='S'):
        sum=sum+(10*m)
        credits=credits+m
    elif(n=='A'):
        sum=sum+(9*m)
        credits=credits+m
    elif(n=='B'):
        sum=sum+(8*m)
        credits=credits+m
    elif(n=='C'):
        sum=sum+(7*m)
        credits=credits+m
    elif(n=='D'):
        sum=sum+(6*m)
        credits=credits+m
    elif(n=="E"):
        sum=sum+(5*m)
        credits=credits+m
    else:
        break
    p=p-1

print("cgpa:",(sum/credits),"with",credits,"total credits")