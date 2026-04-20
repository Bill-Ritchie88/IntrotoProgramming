def solution(A):
    # Create an empty set to store unique absolute values
    distinct_absolute_values = set()
    
    # Iterate through every number in the provided array
    for number in A:
        # Convert the number to its absolute value using abs()
        # and add it to the set. Sets only keep unique items.
        distinct_absolute_values.add(abs(number))
    
    # The length of the set is the count of distinct absolute values
    return len(distinct_absolute_values)

# Testing the example from your exercise
A = [-5, -3, -1, 0, 3, 6]
print("Absolute Distinct Count:", solution(A))