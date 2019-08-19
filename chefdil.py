# cook your dish here
t=int(input())
for i in range(t):
    s=input()
    for j in range(len(s)-1):
        if(j==0):
            p=int(s[j])^int(s[j+1])
        else:
            p=p^int(s[j+1])
    if(p==1):
        print("WIN")
    else:
        print("LOSE")
            
        
        
