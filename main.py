n=int(input())
for i in range(n):
    D,d,P,Q=map(int , input().split())
    z=D//d
    if (z%2==0):
        a=d*((z//2)*(2*P+(z-1)*Q))
        
    else:
        a=d*(z*(P+((z-1)//2)*Q))
        
        
    a+=(D%d)*(P+z*Q)
    print(int(a))
