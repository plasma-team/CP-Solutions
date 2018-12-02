input()
x = {int(i) for i in input().split(' ')}
y = [int(i) for i in x]
word = ""
for i in sorted(y):
    word += str(i)+" "
print(word)