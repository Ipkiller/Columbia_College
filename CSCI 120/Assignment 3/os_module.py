import os


def print_directory_contents(path):
    """
    This function takes the path of a directory and prints the contents of that directory.
    """
    # Check if the path exists and is a directory
    if os.path.exists(path) and os.path.isdir(path):
        print(f"Contents of directory '{path}':")
        # List all the files and directories in the given path
        contents = os.listdir(path)
        for item in contents:
            print(item)
    else:
        print(f"The path '{path}' does not exist or is not a directory.")


# Provide the path of the directory you want to print
directory_path = input("Enter the directory path: ")
print_directory_contents(directory_path)
