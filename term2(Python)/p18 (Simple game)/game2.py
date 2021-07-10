import random

words = ['red', 'cold', 'hot', 'geeks', 'rain', 'black', 'snow', 'hills', 'code']
word = random.choice(words)
user_point = 0

def get_indexes(the_list, elem):
    matches = []
    last_pos = 0
    while True:
        try:
            last_pos = the_list.index(elem, last_pos)
            matches.append(last_pos)
            last_pos += 1
        except:
            break
    return matches

guess = list("_" *len(word))
print(" ".join(guess))
while True:
    char = input("Guess letter : ")
    if len(char) != 1:
        print("Please Enter single character.")
        continue
    if char in word:
        for x in get_indexes(word, char):
            guess[x] = char
        print("Nice!\n")
        print(" ".join(guess))
        if not "_" in guess:
            print("You win")
            break
    else:
        print("Nope.")
        user_point -= 1
        if user_point <= -10:
            print("You lose")
            break