# Enter your code here. Read input from STDIN. Print output to STDOUT
a=map(int ,raw_input().split())
b,c,n=a[0],a[1],a[-1]
d=0
if n==1:
    print a
elif n==2:
    print b
else:
    while n-2>0:
        d=b+c**2
        b=c
        c=d
        n-=1
print d
    

