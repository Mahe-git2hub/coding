for t in range(int(input())):
    n, k = list(map(int, input().split()))
    a = input().split(' ')
    for i in range(k):
        val = a.pop()
        if val == 'H':
            for j in range(len(a)):
                if a[j] == 'H':
                    a[j] = 'T'
                else:
                    a[j] = 'H'
    print(a.count('H'))
