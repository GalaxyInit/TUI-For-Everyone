n=int(input())
b=[]
c=0
for i in range(n):
    a=int(input())
    b.append(a)
for i in range (n):
    for j in range (n):
        if (b[i]==b[j]):
            c+=1
        else:
            continue
    if(c>1):
        c=0
        continue
    else:
        print(b[i])
        break
if (c==0):
    print("-1")
