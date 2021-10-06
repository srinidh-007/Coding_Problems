'''
Sorting: Selection sort using recursion
'''


def selection(l, n):
    if n == len(l):
        return l
    else:
        s = max(l)
        f = len(l)-1
        for i in range(n, len(l)):
            if l[i] < s:
                s = l[i]
                f = i
        l[n], l[f] = l[f], l[n]
        return selection(l, n+1)


f = int(input())
l = [int(input()) for i in range(f)]
n = 0
print(selection(l, n))
