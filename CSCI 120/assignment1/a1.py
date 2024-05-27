#Student ID of the Developers

"""
Students ID's
814994
815290
815203
"""


# Dictionary of Fruit data
fruit_dictionary={'apple': '130', 'avocado': '50', 'banana': '110', 'cantaloupe': '50', 'grapefruit': '60', 'grapes': '90', 'honeydew melon': '50', 'kiwifruit': '90', 'lemon': '15', 'lime': '20', 'nectarine': '60', 'orange': '80', 'peach': '60', 'pear': '100', 'pineapple': '50', 'plums': '70', 'strawberries': '50', 'sweet cherries': '100', 'tangerine': '50', 'watermelon': '80'}

#User menu
print("\n")
print("Use exit to leave the program")
print("\n")

# Implying infinity While loop as to ask for input again and again unless exit(break).
while True:
    #Asking for input from user in lower characters
    user_input=input("Enter the name of the fruit:- ").lower()

    #Condition to Check Whether the user_input is in fruit_dictionary
    if user_input not in fruit_dictionary:
        #To ignore the input that is not included in fruit dictionary.
        if user_input !="exit":
            continue
        else:
            print("You have been Exit the program")
            break
    else:
        print("Calories:- ",fruit_dictionary[user_input])
