def main():
    a = [5, 6, 4, 23, 8, 9, 6]
    n = len(a)
    gap = n // 2
    shell(a, n, gap)
    for element in a:
        print(element)

def shell(a, n, gap):
    while gap > 0:
        for j in range(gap, n):
            temp = a[j]
            i = j
            while i >= gap and a[i - gap] > temp:
                a[i] = a[i - gap]
                i -= gap
            a[i] = temp
        gap //= 2
main()
