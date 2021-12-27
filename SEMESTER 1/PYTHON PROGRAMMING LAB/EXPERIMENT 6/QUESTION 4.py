import random
import re

def scramble_word(word):
    if len(word) <= 3:   # short words don't have enough letters to shuffle
        return word

    first, *middle, last = word    # fancy unpacking! middle will be a list
    random.shuffle(middle)    # this modifies the list in place
    return first + "".join(middle) + last   # rejoin into a single string

def scramble_text(text):
    return re.sub(r"\w+", lambda match: scramble_word(match.group()), text)

def scramble_file(input_filename, output_filename):
    with open(input_filename) as input_file:
        text = input_file.read()

    scrambled_text = scramble_text(text)

    with open(output_filename, "w") as output_file:
        output_file.write(scrambled_text)

        
scramble_word("scramble word @@@hhhyuhujikkk*&**")
