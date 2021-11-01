t=int(input())
for i in range(t):
    l=[]
    h=0
    n,k=map(int,input().split())
    z=input().split()
    for i in range(n):
        l.append(float(z[i]))
    l.sort()
    a=l[n-1]
    b=l[0]
    if -b>a and k>0:
        c=(-b)
    else:
        c=(a)
    v="-"+str(c)
    for i in range(n):
        if z[i]==str(c) or z[i]==v:
            h=1
    if h==1:
        print(c)
    else:
        print(int(c))
