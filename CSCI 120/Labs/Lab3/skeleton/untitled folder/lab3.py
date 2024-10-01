#814994
import sys

def is_palindrome(input_string):
    """
    Check if the given string is a palindrome.

    Parameters:
    - input_string (str): The string to be checked.

    Returns:
    - bool: True if the string is a palindrome, False otherwise.
    """
    #WRITE YOUR CODE HERE
    collector=""
    for i in range(1,len(input_string)+1):
        i*=-1
        collector+=input_string[i]
    if collector==input_string:
        return True
    return False
    # DONT WRITE Anything below


def main():
    # Initialize an array of strings for testing
    input_strings = ["madam", "hello"]

    for input_string in input_strings:
        # Check if the input string is a palindrome
        is_pal = is_palindrome(input_string)

        print("\nInput string is", input_string)

        # Display the result
        if is_pal:
            print(f"\n'{input_string}' is a palindrome.")
        else:
            print(f"\n'{input_string}' is not a palindrome.")


if __name__ == "__main__":
    main()
