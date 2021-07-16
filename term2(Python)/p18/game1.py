import os
import random
import time

min_space = 5
max_space = 30
line_legnth = 40

lose_streak = 3
total_lose_rounds = 8

user_points = 0
default_time = 1.0

def clear():
    os.system('cls')


while True:
    print("Starting in 3..")
    time.sleep(1)
    print("Starting in 2..")
    time.sleep(1)
    print("Starting in 1..")
    time.sleep(1)
    print("Ready ?")
    time.sleep(1)
    clear()
    round_n = 10
    rand_nums = [random.randint(0,99) for _ in range(round_n)]
    max_num = max(rand_nums)
    output = "\n"

    for x in range(30):
        remain_space = line_legnth
        rnd = random.randint(min_space,max_space)
        while 0 < remain_space - rnd < 40 and rand_nums:        
            output += " " * rnd
            output += str(rand_nums.pop())
            remain_space -= rnd
            rnd = random.randint(min_space,max_space)
        output += "\n"
        if not rand_nums: break
    print(output)
    time.sleep(default_time)
    clear()
    inp = input("What was the biggest number ?")
    if int(inp) == max_num:
        print("Good job, you won this round :)")
        round_n += 2
        user_points += 10
        lose_streak = 3
        if user_points % 50 == 0:
            round_n += 2
        if user_points % 100 == 0:
            default_time -= 0.05
    else:
        print("Ooops, you lost. maybe next time!")
        user_points -= 1
        lose_streak -= 1
        total_lose_rounds -= 1
        if lose_streak <= 0 or total_lose_rounds <= 0: break


print(f"Game over, you scored {user_points}")