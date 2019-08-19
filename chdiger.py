t=int(input())
for i in range(t):
    n,d=map(int,input().split())
    b=str(n)
    c=[]
    p=0
    for digit in b:
        c.append(int(digit))
    lt=len(c)
    if c==sorted(c):
        for i in range(len(c)):
            if d<=c[i]:
                c[i]=d
            else:
                continue
    else:
        while(True):
            if c==sorted(c):
                break
            if c[p]>c[p+1]:
                del c[p]
                c.append(d)
                p=0
            else:
                p=p+1
    s=''.join(str(e) for e in c)
    print(s)
            
            
