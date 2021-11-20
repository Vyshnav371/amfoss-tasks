t=int(input())
l=[]
for i in range(t):
    n=int(input())
    k=n
    r=int(k**0.5)
    while k%2==0:
        k=k//2
    if k==1:
        print(2)
    else:
        for i in range(3,r,2):
            if k%i==0:
                while k%i==0:
                    k=k//i
                l.append(i)
        if k>2:
            print(k)
        else:
            print(l[-1])
