# 814994
def find_longest_string(string_list):
    """
    Find the longest string in the given list.

    Parameters:
    - string_list (list): A list of strings.

    Returns:
    - str: The longest string in the list. If multiple strings have the same maximum length, return the first occurrence.
    """
    # WRITE YOUR CODE HERE
    first_occurence = string_list[0]
    for str in string_list:
        if len(str) > len(first_occurence):
            first_occurence = str
    return first_occurence
    # DO NOT CHANGE ANYTHING BELOW THIS


def main():
    # Initialize a list of strings for testing
    string_list = ["apple", "banana", "orange", "123456", "kiwi", "grape"]

    # Find the longest string in the list
    longest = find_longest_string(string_list)

    # Display the longest string
    print(f"\nOriginal List: {string_list}")
    print(f"Longest String: {longest}")


if __name__ == "__main__":
    main()
