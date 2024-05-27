import random
import json

file = open("cach.json", "r")
words_list = json.load(file)
file.close()


class WordSortingGame:
    def __init__(self, words):
        self.words = words
        self.score = 0

    def display_in_box(self, lst):
        if type(lst) == list:
            top = ""
            middle = ""
            bottom = ""
            for item in lst:
                width = len(item)+2
                top += "┌" + "─" * width + "┐"
                middle += "│ " + item + " │"
                bottom += "└" + "─" * width + "┘"
            print(top)
            print(middle)
            print(bottom)

        else:
            width = len(lst)+2
            item = lst
            print("┌" + "─" * width + "┐")
            print("│ " + item + " │")
            print("└" + "─" * width + "┘")

    def random_chooser(self):
        return self.words[random.randint(0, len(self.words)-1)]

    def shuffle_word(self, word):
        empty_list = []
        for i in word:
            empty_list.append(i)

        data = empty_list
        result = []
        for i in range(len(data)):
            j = random.randint(i, len(data)-1)
            element = data[i]
            data[i] = data[j]
            data[j] = element
            result.append(data[i].upper())
        return self.display_in_box(result)

    def play_round(self, i):
        word = self.random_chooser()
        if i == 0:
            print("Scrambled word:- ")
        else:
            print("Next scrambled word:- ")
        self.shuffle_word(word)
        guess = input("Enter your guess: ").strip().lower()
        if guess == word:
            print("Correct!")
            self.score += 1
            print(f"\nYour score is:- {self.score}\n")
        elif guess == "quit":
            return 0
        elif guess.isdigit():
            print("\n!!Invalid input use only words not numbers\n")
        else:
            print("\nIncorrect. The correct word was:- ")
            self.display_in_box(word.capitalize())

    def play_game(self):
        print("Welcome to Word Sorting Game!")
        print("Unscramble the words to earn points.")
        print("Enter 'quit' to end the game.\n")
        i = 0
        while True:
            check = self.play_round(i)
            i = 1
            if check == 0:
                print(f"Your final score is:- {self.score}")
                break


game_object = WordSortingGame(words_list)
game_object.play_game()
