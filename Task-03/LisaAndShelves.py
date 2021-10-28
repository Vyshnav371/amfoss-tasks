n=int(input())
c=0
k=int(n**0.5)
for i in range(1,k+1):
    if n%i==0 and n//i!=i:
        c+=2
    elif n%i==0:
        c+=1
print(c)
