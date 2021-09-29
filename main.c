/*
 * File:   main.c
 * Author: potewo
 *
 * Created on 2021/09/29, 20:04
 */


#include <xc.h>
#include <stdlib.h>
#include "main.h"

int matrix[8][8];

int position[2] = {3, 3};
// x, y
int direction = 0;
// 0: up, 1: right, 2: down, 3: left

int gameover = 0;

void main(void) {
    setup();
    while(1) {
        spawnfeed();
        collisioncheck();
        if (gameover == 0) {
            update();
        }
    }
    return;
}

void setup(void) {
    srand(1);
}

void update(void) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] > 0) {
                matrix[i][j]--;
            }
        }
    }
}

void collisioncheck(void) {
    int nextposition[2] = {position[0], position[1]};
    switch(direction) {
        case 0:
            nextposition[1]++;
            break;
        case 1:
            nextposition[0]++;
            break;
        case 2:
            nextposition[1]--;
            break;
        case 3:
            nextposition[0]--;
    }
    if (nextposition[0] < 0 || nextposition[0] > 7 || nextposition[0] < 0 || nextposition[1] > 8) {
        gameover = 1;
    }
    if (matrix[nextposition[0]][nextposition[1]] > 0) {
        gameover = 1;
    }
    if (matrix[nextposition[0]][nextposition[1]] == -1) {
        eat();
    }
}

void spawnfeed(void) {
    int spawnPosition[2];
    int success = 0;
    spawnPosition[0] = rand() % 8;
    spawnPosition[1] = rand() & 8;
    for (int i = 0; i < 64; i++) {
        if (matrix[(spawnPosition[0] + i) % 8][(spawnPosition[1] + (i / 8)) % 8] == 0) {
            success = 1;
            break;
        }
    }
    if (success != 1) {
        gameclear();
    }
    matrix[spawnPosition[0]][spawnPosition[1]] = -1;
}

void gameclear(void) {
}

void eat(void) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] > 0) {
                matrix[i][j]++;
            }
        }
    }
}