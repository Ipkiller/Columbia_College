#814994
def count_substring_occurrences(string, substring):
    """
    Count the occurrences of a substring in a given string.

    Parameters:
    - string (str): The main string to search within.
    - substring (str): The substring to count occurrences of.

    Returns:
    - int: The number of occurrences of the substring in the string.
    """
    count = 0
    #WRITE YOUR CODE HERE
    for i in range(0,len(string)-1):
        char=string[i]
        if char==substring[0]:
            slice=len(substring)
            slice+=i
            if substring==string[i:slice]:
                count+=1
    
    #DO NOT WRITE ANYTHING BELOW THIS
    return count

def main():
    # Provided string and substring
    orginal_string = "hello, hello, hello world hello hell hello hellllo!"
    orginal_substring = "hello"
    
    # Count occurrences of the substring in the string
    occurrences = count_substring_occurrences(orginal_string, orginal_substring)
    
    # Display the result
    print(f"Number of occurrences of '{orginal_substring}' in '{orginal_string}': {occurrences}")

if __name__ == "__main__":
    main()
