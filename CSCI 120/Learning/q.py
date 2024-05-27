cities=["vancouver","burnaby","Coquitlam","Richmond"]
def prompt(prompt, valid):
    response=input(prompt)
    while True:
        if not response in cities:
            response=input("Incorrect Type again: ")
        else:
            return "You are correct"
answer=prompt("Type the name of one city metro vancouver: ", cities)
print(answer)

# cities=["vancouver","burnaby","Coquitlam","Richmond"]
# def prompt(prompt, valid):
#     response=input(prompt)
#     while response not in cities:
#         response=input("Incorrect Type again: ")
#     return "Your are correct"
# answer=prompt("Type the name of one city metro vancouver: ", cities)
# print(answer)