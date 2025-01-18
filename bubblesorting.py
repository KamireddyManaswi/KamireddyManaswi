def bubble_sort(numbers):
    n = len(numbers)
    for i in range(n - 1):
        for j in range(n - i - 1):
            if numbers[j] > numbers[j + 1]:  # Compare integers
                t=numbers[j]
                numbers[j] = numbers[j + 1]
                numbers[j+1]=t  # Swap

# Input from the user
n = int(input("Enter the number of integers: "))
numbers = []

print(f"Enter {n} integers:")
for i in range(n):
    numbers.append(int(input()))

# Perform bubble sort
bubble_sort(numbers)

# Display sorted integers
print("After sorting:")
for number in numbers:
    print(number)
