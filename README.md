Car Dodge Game 🚗

A console-based car dodging game written in C.
Your goal is to avoid multiple falling obstacles as long as you can!
The game becomes faster over time, making it more challenging.

How to Play

Use Left Arrow (←) to move left

Use Right Arrow (→) to move right

Dodge all falling objects

If any obstacle hits your lane → Game Over

Main Menu

When the program starts, you’ll see:

==== CAR DODGE GAME ====
1. Start Game
2. Quit


Press 1 → Play

Press 2 → Exit the program

Game Features

✔ Multiple random obstacles
✔ Increasing speed for difficulty
✔ Simple ASCII game visuals
✔ Endless play until collision
✔ Quick restart from menu

Requirements

Windows OS

A C compiler (GCC/MinGW or Visual Studio)

Console support for <conio.h> and <windows.h> libraries

How to Compile & Run

Using GCC (MinGW):

gcc car_game.c -o car_game


Then run:

./car_game


Enjoy the game and try to stay alive as long as possible! 😄
Feel free to customize or improve the gameplay!

You said:
also involve the changes
ChatGPT said:

Sure! Here’s an updated README that mentions the improvements made from the previous version:

Car Dodge Game 🚗

A simple console-based dodging game written in C for Windows.
Control your car and avoid falling obstacles as the game speeds up!

This is an improved version of the original single-obstacle game — now with multiple obstacles, a main menu, and increasing difficulty.

What’s New in This Version

Compared to the earlier version with just one falling obstacle:

🔹 3 falling obstacles at once

🔹 Difficulty increases automatically as speed gets faster

🔹 Start Menu added (Play / Quit)

🔹 Improved game loop structure

🔹 Smoother restarting after Game Over

🔹 Cleaner screen drawing and timing

How to Play

Press Left Arrow (←) to move left

Press Right Arrow (→) to move right

Avoid every falling object

Collision = Game Over, and you return to the menu

Menu
==== CAR DODGE GAME ====
1. Start Game
2. Quit
Select:

Features

✔ Multiple random obstacles
✔ ASCII graphics
✔ Endless gameplay
✔ Speed increases over time
✔ Instant restart from menu

Requirements

Windows PC

C compiler supporting:

<conio.h>

<windows.h>

Example compilers: GCC/MinGW, MSVC

Compile & Run (GCC Example)
gcc car_dodge.c -o car_dodge


Run:

./car_dodge

Notes

The game logic and display are fully console-based

Obstacles spawn in random lanes each cycle

Speed will not go below a safe minimum to keep it playable

Have fun dodging! 🚘💨
Feel free to modify and add more features!
