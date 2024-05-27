#814994
import sys

def filter_students(student_list, min_age, min_grade, gender):
    """
    Filter students based on minimum age, minimum grade, and gender.

    Parameters:
    - student_list (list): A list of dictionaries where each dictionary represents a student.
    - min_age (int): The minimum age for filtering (inclusive).
    - min_grade (int): The minimum grade for filtering (inclusive).
    - gender (str): The gender for filtering.

    Returns:
    - list: A list of dictionaries containing only those students who meet the specified criteria.
    """
    filtered_students = []
    
    # WRITE YOUR CODE HERE
    for i in student_list:
        if i["age"]>=min_age and i["grade"]>=min_grade and i["gender"]==gender:
            filtered_students.append(i)
    # DONT WRITE ANYTHING BELOW THIS
    return filtered_students

def main():
    # Initialize a list of dictionaries for testing
    student_list = [
        {"name": "John", "age": 20, "grade": 85, "gender": "Male"},
        {"name": "Emma", "age": 22, "grade": 90, "gender": "Female"},
        {"name": "Alex", "age": 19, "grade": 78, "gender": "Male"},
        {"name": "Sarah", "age": 21, "grade": 88, "gender": "Female"},
        {"name": "Joe", "age": 22, "grade": 86, "gender": "Male"},

    ]

    # Filter the list of students based on the specified criteria
    filtered_students = filter_students(student_list, min_age=20, min_grade=80, gender="Male")

    # Display the filtered list of students
    print("\nFiltered Students:")
    for student in filtered_students:
        print(student)

if __name__ == "__main__":
    main()
