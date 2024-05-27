def print_hello_recursive(word, index=0):
    if index == len(word):
        return ""
    p=print_hello_recursive(word, index + 1)
    p+=word[index]
    return p

# Call the function
w="aba"
p=print_hello_recursive(""+w)
print(p==w)