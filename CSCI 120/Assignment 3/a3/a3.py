"""
Student ID's
814994
815290
815203
"""
import random
import json


class WordSortingGame:
    """
    A class representing a Word Sorting Game.

    This game prompts the player to unscramble words and awards points for correct guesses.
    """

    def __init__(self, words):
        """
        Initialize the WordSortingGame object.

        Args:
            words (list): A list of words to be used in the game.
        """
        # Initialize the game with a list of words and a score of 0
        self.words = words
        self.score = 0

    def display_in_box(self, lst):
        """
        Display the given list of items in a box format.

        Args:
            lst (list or str): List of items or a single item.
        """
        if type(lst) == list:
            # If the input is a list, display each item in a box
            top = ""
            middle = ""
            bottom = ""
            for item in lst:
                width = len(item) + 2
                top += "┌" + "─" * width + "┐"
                middle += "│ " + item + " │"
                bottom += "└" + "─" * width + "┘"
            print(top)
            print(middle)
            print(bottom)
        else:
            # If the input is a single item, display it in a box
            width = len(lst) + 2
            print("┌" + "─" * width + "┐")
            print("│ " + lst + " │")
            print("└" + "─" * width + "┘")

    def random_chooser(self):
        """
        Randomly choose a word from the provided list of words.

        Returns:
            str: A randomly chosen word.
        """
        return self.words[random.randint(0, len(self.words) - 1)]

    def shuffle_word(self, word):
        """
        Shuffle the characters of the given word.

        Args:
            word (str): Word to be shuffled.

        Returns:
            None
        """
        empty_list = []
        for i in word:
            empty_list.append(i)

        data = empty_list
        result = []
        for i in range(len(data)):
            j = random.randint(i, len(data) - 1)
            element = data[i]
            data[i] = data[j]
            data[j] = element
            result.append(data[i].upper())
        self.display_in_box(result)

    def play_round(self, i):
        """
        Play a round of the word sorting game.

        Args:
            i (int): Index of the current round.

        Returns:
            int: Returns 0 if the game is to be ended, otherwise None.
        """
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
        """
        Start and manage the word sorting game.

        Returns:
            None
        """
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


# Load words from the JSON file
try:
    file = open("a3.json", "r")
    words_list = json.load(file)
    file.close()

except:
    words_list = ["apple",
                  "banana",
                  "orange",
                  "grape",
                  "melon",
                  "pear",
                  "fish",
                  "bird",
                  "snake",
                  "frog",
                  "duck",
                  "rabbit",
                  "mouse",
                  "turtle",
                  "lion",
                  "tiger",
                  "elephant",
                  "monkey",
                  "zebra",
                  "giraffe",
                  "car",]

# Create an instance of WordSortingGame and start the game
game_object = WordSortingGame(words_list)
game_object.play_game()
