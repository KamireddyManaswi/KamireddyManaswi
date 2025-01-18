def swap(a, i, j):
    # Function to swap two elements in the array
    a[i], a[j] = a[j], a[i]

def partition(a, lb, ub):
    l = lb
    u = ub
    pivot = a[lb]

    while l < u:
        while l < ub and a[l] <= pivot:
            l += 1
        while a[u] > pivot:
            u -= 1
        if l < u:
            swap(a, l, u)

    swap(a, lb, u)
    return u

def quicksort(a, lb, ub):
    if lb < ub:
        loc = partition(a, lb, ub)
        quicksort(a, lb, loc - 1)
        quicksort(a, loc + 1, ub)

if __name__ == "__main__":
    a = [4, 7, 8, 0, 2, 1]
    lb = 0
    ub = len(a) - 1

    quicksort(a, lb, ub)

    print("Sorted array:")
    for element in a:
        print(element, end=" ")
