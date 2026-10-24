# import random  #importing everything of random
# coin = random.choice(["heads", "tails"]) #gives random with equal probability

# print(coin)

# from random import choice

# coin = choice(["heads" , "tails"])

# print(coin)

import random

number = random.randint(1 , 10) #random integer including 1 and 10
print(number)

cards  = ["jack" ,"queen" , "king"]

random.shuffle(cards)

for card in cards:
    print(card)


    