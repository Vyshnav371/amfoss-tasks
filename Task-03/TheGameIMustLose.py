n,m=map(int,input().split())
a=0
l=[]
while n%2==0:
    a=a+1
    n=n/2
for i in range(1,m+1):
    if i%(2**a)!=0:
        l.append(i)
print(len(l))
for i in range(len(l)):
    print(l[i],end=" ")
