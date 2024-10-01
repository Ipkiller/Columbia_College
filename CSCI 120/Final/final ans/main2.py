# 814994
def is_rotation(str1, str2):
    """
    Check if str2 is a rotation of str1.

    Parameters:
    - str1 (str): The first string.
    - str2 (str): The second string.

    Returns:
    - bool: True if str2 is a rotation of str1, False otherwise.
    """
    # WRITE YOUR CODE HERE
    str_list = [char for char in str1]
    for i in range(len(str_list)):
        checker = ''
        for j in str_list:
            checker += j
        if checker == str2:
            return True
        value = str_list.pop(0)
        str_list.append(value)
    return False

    # DO NOT CHANGE ANYTHING BELOW THIS


def main():
    # Two default initialized input strings
    input1 = "abcd"
    input2_rotation = "cdab"
    input3_rotation = "acbd"

    # Check if input2_rotation is a rotation of input1
    if is_rotation(input1, input2_rotation):
        print(f"'{input2_rotation}' is a rotation of '{input1}'.")
    else:
        print(f"'{input2_rotation}' is not a rotation of '{input1}'.")

    # Check if input3_rotation is a rotation of input1
    if is_rotation(input1, input3_rotation):
        print(f"'{input3_rotation}' is a rotation of '{input1}'.")
    else:
        print(f"'{input3_rotation}' is not a rotation of '{input1}'.")


if __name__ == "__main__":
    main()
