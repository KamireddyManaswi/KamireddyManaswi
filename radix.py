def radix_sort(a):
    def counting_sort(a, n, pos):
        # Initialize count array
        count = [0] * 10
        b = [0] * n

        # Count occurrences of each digit at the given position
        for i in range(n):
            index = (a[i] // pos) % 10
            count[index] += 1

        # Update count to contain positions of elements in the sorted array
        for i in range(1, 10):
            count[i] += count[i - 1]

        # Build the sorted array
        for i in range(n - 1, -1, -1):
            index = (a[i] // pos) % 10
            b[count[index] - 1] = a[i]
            count[index] -= 1

        # Copy sorted elements back into the original array
        for i in range(n):
            a[i] = b[i]

    # Find the maximum number to determine the number of digits
    max_num = max(a)
    n = len(a)

    # Perform counting sort for each digit
    pos = 1
    while max_num // pos > 0:
        counting_sort(a, n, pos)
        pos *= 10


# Main function
if __name__ == "__main__":
    a = [1, 44, 5555, 66, 7, 356, 78, 23]
    radix_sort(a)
    print("Sorted array:", " ".join(map(str, a)))
