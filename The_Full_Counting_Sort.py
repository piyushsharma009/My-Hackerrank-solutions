n=int(input())
l=[]
count=[0]*100
for i in range(n):
    a,b=input().split()
    a=int(a)
    l.append([a,b])
    #print(l[i][0])
    count[l[i][0]]+=1
out=['']*n
for i in range(1,100):
    count[i]+=count[i-1]
for i in range(n-1,-1,-1):
    if i<n/2:
        out[count[l[i][0]]-1]='-' 
        count[l[i][0]]-=1
    else:
        out[count[l[i][0]]-1]=l[i][1] 
        count[l[i][0]]-=1
for i in range(n):
        print(out[i],end=" ")
