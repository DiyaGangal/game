#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

#define OBSTACLES 3

int main() {
startMenu:
    system("cls");
    printf("==== CAR DODGE GAME ====\n");
    printf("1. Start Game\n");
    printf("2. Quit\n");
    printf("Select: ");

    char opt = getch();
    if (opt == '2') return 0;
    if (opt != '1') goto startMenu;

    srand(time(0));

    int x = 1;                     // player lane
    int step[OBSTACLES];           // vertical pos for each obstacle
    int lane[OBSTACLES];           // lane for each obstacle
    int speed = 150;               // decreasing over time (difficulty)

    for (int i = 0; i < OBSTACLES; i++) {
        step[i] = rand() % 10;
        lane[i] = rand() % 3;
    }

    while (1) {

        // ---- INPUT ----
        if (_kbhit()) {
            char ch = getch();
            if (ch == 75 && x > 0) x--;
            if (ch == 77 && x < 2) x++;
        }

        // ---- DRAW ----
        system("cls");
        printf("|--- --- ---|\n");

        for (int r = 0; r < 10; r++) {
            int printed = 0;
            for (int o = 0; o < OBSTACLES; o++) {
                if (step[o] == r) {
                    if (lane[o] == 0) printf("| %c        |\n", 1);
                    else if (lane[o] == 1) printf("|     %c    |\n", 1);
                    else printf("|        %c |\n", 1);
                    printed = 1;
                    break;
                }
            }
            if (!printed) printf("|           |\n");
        }

        // ---- PLAYER ----
        if (x == 0) printf("| %c         |\n", 6);
        else if (x == 1) printf("|     %c     |\n", 6);
        else printf("|        %c  |\n", 6);

        // ---- COLLISION ----
        for (int o = 0; o < OBSTACLES; o++) {
            if (step[o] == 10 && lane[o] == x) {
                printf("\nGAME OVER!\n");
                Sleep(1500);
                goto startMenu;
            }
        }

        Sleep(speed);

        // ---- MOVE OBSTACLES + DIFFICULTY ----
        for (int o = 0; o < OBSTACLES; o++) {
            step[o]++;
            if (step[o] > 10) {
                step[o] = 0;
                lane[o] = rand() % 3;
            }
        }

        // Increase difficulty (speed cannot go below 40)
        if (speed > 40) speed--;
    }
}