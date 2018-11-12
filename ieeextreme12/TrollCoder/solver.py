__author__ = "jarwo"

n, m, x = int(raw_input()), 0, []

for i in range(n): x.append(0)

# init
print "Q %s" % ' '.join(map(str, x))

def ans(m, n):
	print "{} {}".format('A' if m == n else 'Q', ' '.join(map(lambda s: s.replace('True', '1').replace('False', '0'), map(str, x))))

def neg(m):
	x[m] = not x[m]

point = int(raw_input())
while m != n:
	neg(m)
	ans(m, n)

	tmp = int(raw_input())
	if tmp < point: neg(m)

	point = tmp
	m += 1

ans(m, n)
