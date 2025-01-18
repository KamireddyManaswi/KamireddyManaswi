def selection_sort(numbers):
    n = len(numbers)
    for i in range(n):
        # Find the minimum element in the remaining unsorted part
        min_index = i
        for j in range(i + 1, n):
            if numbers[j] < numbers[min_index]:
                min_index = j
        # Swap the found minimum element with the first element
        t=numbers[i]
        numbers[i] = numbers[min_index]
        numbers[min_index]=t

# Input from the user
n = int(input("Enter the number of integers: "))
numbers = []

print(f"Enter {n} integers:")
for _ in range(n):
    numbers.append(int(input()))

# Perform selection sort
selection_sort(numbers)

# Display sorted integers
print("After sorting:")
for number in numbers:
    print(number)
