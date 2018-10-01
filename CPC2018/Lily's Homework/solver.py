def jancoeg(input):
    arr = {}
    for i in range(len(input)):
        arr[input[i]] = i
    sorted_array = sorted(arr)
    total = 0
    for i in range(len(input)):
        if input[i] != sorted_array[i]:
            total += 1

            x = arr[sorted_array[i]]
            arr[input[i]] = arr[sorted_array[i]]
            input[i], input[x] = sorted_array[i], input[i]
    return total

raw_input()
input = [int(i) for i in raw_input().split(' ')]

asc=jancoeg(list(input))
desc=jancoeg(list(reversed(input)))
print min(asc,desc)