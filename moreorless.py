from random import *
import sys 
secret_number = randint(1, 100)   
on_off = True
test = 1

help = False
for arg in sys.argv:
    if "-cheat" == arg:
        print("The mystery number is: ",secret_number)
    elif "-help" == arg:
        help = True

while on_off:
    try:
        number_give = int(input("Guess the number ?\n"))
        if number_give == secret_number:
            if test == 1:
                print(f"Well done, you found the mystery number in one shot !")
            else:
                print(f"Well done, you found the mystery number in {test} moves !")
            on_off = False
        if number_give != secret_number:
            test += 1
        if help == True:
            if secret_number > number_give:
                print("It's more !")
            elif secret_number < number_give:
                print("It's less!")
    except:
        print("Please insert a number !\n")
