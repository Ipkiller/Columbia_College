#814994
import sys
import math

def filter_prime_numbers(arr):
    """
    Filter prime numbers from the given list.

    Parameters:
    - arr (list): The list to be filtered.

    Returns:
    - list: The list containing only prime numbers from the original list.
    """
    prime_numbers = []
    #WRITE YOUR CODE HERE

    for i in range(0,len(arr)):
        element=arr[i]

        if element in [1,0]:
            prime_numbers.append(int(element))
        else:
            k=2
            while k<=element:
                reminder=element%k
                if reminder==0:
                    if element==k:
                        prime_numbers.append(element)
                    else:
                        break
                k+=1
    #DO NOT WRITE ANYTHING BELOW THIS
    return prime_numbers

def main():
    # Initialize a sorted list of integers for testing
    original_list = [0, 4, 5, 9, 10, 13, 14, 15, 17, 21]


    # Filter prime numbers from the original list
    prime_list = filter_prime_numbers(original_list.copy())

    # Display the prime numbers
    print(f"\nOriginal List: {original_list}")
    print(f"Prime Numbers: {prime_list}")

if __name__ == "__main__":
    main()
