import math
a,b = [int(i) for i in input().split(' ')]
c,d = [int(i) for i in input().split(' ')]
x = abs(c-a)+abs(d-b)
x = math.factorial(x)
y = math.factorial(abs(c-a))*math.factorial(abs(d-b))
print('{0:.3g}'.format(x/y))