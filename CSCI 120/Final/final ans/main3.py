# 814994
def recursive_list_sum(nested_list):
    """
    Recursively computes the sum of all elements in a nested list.

    Parameters:
    - nested_list (list): The nested list to compute the sum of.

    Returns:
    - int: The sum of all elements in the nested list.
    """
    # WRITE YOUR CODE HERE
    sum = 0
    for value in nested_list:
        if type(value) is list:
            sum = sum + recursive_list_sum(value)
        else:
            sum = sum + value
    return sum

    # DO NOT CHANGE ANYTHING BELOW THIS


def main():
    # Example nested list
    nested_list = [1, 2, [3, 4, [5, 6]], [7, [8]], 9]

    # Compute the sum of all elements in the nested list recursively
    sum_of_elements = recursive_list_sum(nested_list)

    # Print the result
    print(f"The sum of all elements in the nested list is: {sum_of_elements}")


if __name__ == "__main__":
    main()
