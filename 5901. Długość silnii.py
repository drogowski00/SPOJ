import math

t = input()
a = math.log(10)
b = 2*math.pi
#http://pl.spoj.com/problems/DLUG_SIL/
while t:      
            n = input()
        
            if n==1:
                print 1 
            elif n==0:
                print 1
            else: 
                print int(math.floor((math.log(b*n)/2+n*(math.log(n)-1))/a)+1)
            t -= 1
                          