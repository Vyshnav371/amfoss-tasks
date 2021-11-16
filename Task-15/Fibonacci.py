t=int(input())
for i in range(t):
    n=int(input())
    s=0
    q=0
    w=1
    while w<n:
        temp=w
        if w%2==0:
            s+=w
        w=w+q
        q=temp
    print(s)
