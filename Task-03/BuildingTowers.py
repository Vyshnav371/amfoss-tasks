n=int(input())
m=input().split()
l=m
c=l.count(l[0])
for i in range(1,n):
    if l.count(l[i])>c:
        c=l.count(l[i])
k=set(m)
print(c,len(k),sep=" ")
