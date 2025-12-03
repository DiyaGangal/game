# Obstacle Dodge Game

This is a console-based game written in C. The player controls a object that can move left or right to avoid falling obstacles. As time goes on, the speed increases, making the game more challenging the longer you survive.

## Improvements in This Version

1. Three obstacles falling at the same time

2. A main menu with Start and Quit options

3. Difficulty increases automatically as the game runs

4. Random obstacle positions for each cycle

5. Smooth restart after Game Over

6. Cleaner screen drawing and better overall gameplay flow

## Controls

Left Arrow Move left

Right Arrow Move right

If an obstacle reaches the bottom in the same lane as the player, the game ends.

## Menu

When the program starts:

==== OBSTACLE DODGE GAME ====
1. Start Game
2. Quit


Press 1 to play or 2 to exit.

## Requirements

Windows OS

C compiler (GCC, MinGW, or Visual Studio)

Supports conio.h and windows.h

## How to compile and run

### Using GCC (on command line)
1. Open folder
2. Run the following command

```bash
clang modifiedgame.c -o game
./game




