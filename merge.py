def merge(a, l, mid, u):
    # Temporary array to hold merged elements
    b = []
    lb = l          # Start index of the left subarray
    ub = mid + 1    # Start index of the right subarray

    # Merge the two subarrays
    while lb <= mid and ub <= u:
        if a[lb] <= a[ub]:
            b.append(a[lb])
            lb += 1
        else:
            b.append(a[ub])
            ub += 1

    # Copy any remaining elements from the left subarray
    while lb <= mid:
        b.append(a[lb])
        lb += 1

    # Copy any remaining elements from the right subarray
    while ub <= u:
        b.append(a[ub])
        ub += 1

    # Copy the merged elements back into the original array
    for i in range(len(b)):
        a[l + i] = b[i]

def mergesort(a, l, u):
    if l < u:
        mid = (l + u) // 2
        mergesort(a, l, mid)     # Sort the left half
        mergesort(a, mid + 1, u) # Sort the right half
        merge(a, l, mid, u)      # Merge the two halves

# Main function
def merge(a, l, mid, u):
    # Temporary array to hold merged elements
    b = []
    lb = l          # Start index of the left subarray
    ub = mid + 1    # Start index of the right subarray

    # Merge the two subarrays
    while lb <= mid and ub <= u:
        if a[lb] <= a[ub]:
            b.append(a[lb])
            lb += 1
        else:
            b.append(a[ub])
            ub += 1

    # Copy any remaining elements from the left subarray
    while lb <= mid:
        b.append(a[lb])
        lb += 1

    # Copy any remaining elements from the right subarray
    while ub <= u:
        b.append(a[ub])
        ub += 1

    # Copy the merged elements back into the original array
    for i in range(len(b)):
        a[l + i] = b[i]

def mergesort(a, l, u):
    if l < u:
        mid = (l + u) // 2
        mergesort(a, l, mid)     # Sort the left half
        mergesort(a, mid + 1, u) # Sort the right half
        merge(a, l, mid, u)      # Merge the two halves
# Main function
if __name__ == "__main__":
    a = [1, 7, 4, 2, 0]
    n = len(a)
    mergesort(a, 0, n - 1)
    
    # Print the sorted array
    for element in a:
        print(element, end=" ")


   
