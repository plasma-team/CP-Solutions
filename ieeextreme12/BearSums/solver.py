t, ans = int(raw_input()), lambda _, __: "{} {}".format(_, __) if _ <= __ else "{} {}".format(__, _)

for _ in range(t):
	datas, temp, ok = [], [], 0
	s, e = map(int, raw_input().split())

	# init
	__ = map(int, raw_input().split())
	for i in __: datas.append(i)

	# chk
	for i in range(e):
		chk = s - datas[i]
		if datas[i] in temp:
			ok = not ok
			print ans(chk, datas[i])
			break
		elif chk not in temp:
			temp.append(chk)

	if not ok: print "!OK"