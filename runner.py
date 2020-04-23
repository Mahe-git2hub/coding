def prod(a, j, k):
    pro = 1
    for i in range(j, k):
        pro *= a[i]
    return pro


for t in range(int(input())):
    n = int(input())
    arra = list(map(int, input().split(' ')))
    count = 0
    for i in range(n):
        for j in range(i, n):
            if i == j:
                count += 1
            elif sum(arra[i:j]) == prod(arra, i, j):
                count += 1
    print(count)
