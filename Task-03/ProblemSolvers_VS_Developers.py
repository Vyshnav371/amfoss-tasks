n,m=map(int,input().split())
d=list(map(int,input().split()))
ps=list(map(int,input().split()))
d.sort()
ps.sort()
c=0
l=[]
x=[]
s=0
if n>m:
    print("NO")
else:
    for i in range(m):
        if c>=n:
            break        
        elif ps[i]>d[c] and c<n:
            l.append(ps[i])
            x.append(d[c])
            c+=1
    for i in range(len(l)):
        s+=l[i]
    if n==len(x):
        print("YES")
        print(s)
    else:
        print("NO")
