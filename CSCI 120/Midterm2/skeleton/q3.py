#814994

def sort_books_by_pages(books):
    """
    Sorts the list of dictionaries representing books by the number of pages in ascending order without using inbuilt function.
    use any sorting algorithm

    Parameters:
    - books (list): The list of dictionaries representing books.


    Output:
    -Print the output Here itself .Dont Return any value
    """
    # WRITE TOUR CODE BELOW
    checker=[] 
    for i in books:
        checker.append(i["pages"])
    def sort(object):
        if len(object)<=1:
            return
        for i in range(1,len(object)):
            element=object[i]
            left_element_index=i-1
            while element<object[left_element_index] and left_element_index>=0:
                object[left_element_index+1]=object[left_element_index]
                object[left_element_index]=element
                left_element_index -=1
        return object
    checker=sort(checker)
    collector=[]
    for j in checker:
        for i in books:
            if i["pages"]==j:
                collector.append(i)
    print("Sorted pages:= \n",collector)


def search_book_by_title(books, title):
    
    """
    Searches for a specific book by title in the list of dictionaries representing books without using inbuilt function.
    use any searching algorithm 
    Parameters:
    - books (list): The list of dictionaries representing books.
    - title (str): The title of the book to search for.


    Output:
    -Print the output Here itself .Dont Return any value
    """
      # WRITE TOUR CODE BELOW
    for i in books:
        if title==i["title"]:
            print("Searched book:= \n",i)

    
def main():
    # Sample book list
    books_list = [
        {'title': 'Python Programming', 'author': 'John Doe', 'pages': 300},
        {'title': 'Introduction to Algorithms', 'author': 'Thomas Cormen', 'pages': 800},
        {'title': 'Data Structures and Algorithms in Python', 'author': 'Michael T. Goodrich', 'pages': 600},
        {'title': 'The Great Gatsby', 'author': 'F. Scott Fitzgerald', 'pages': 200}
    ]

    # Sort books by number of pages
    sort_books_by_pages(books_list)

    # Search for specific books
    search_book_by_title(books_list, "Python Programming")
    search_book_by_title(books_list, "Harry Potter")

if __name__ == "__main__":
    main()
