/*
 * File:   main.c
 * Author: potewo
 *
 * Created on 2021/09/29, 20:04
 */


#include <xc.h>
#include <stdlib.h>
#include "main.h"
#include "mcc_generated_files/mcc.h"

int matrix[8][8];

int position[2] = {3, 3};
// x, y
int direction = 0;
// 0: up, 1: right, 2: down, 3: left
int length = 1;

int gameover = 0;

unsigned int lasttime = 0;
unsigned int currenttime = 0;

void main(void) {
    SYSTEM_Initialize();
    TMR0_SetInterruptHandler(timerInterruptHandler);
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
    setup();
    spawnFeed();
    while(1) {
        
        render();
    }
    return;
}

void setup(void) {
    srand(RANDOM_SEED_GetValue());
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

void collisionCheck(void) {
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
        return;
    }
    if (matrix[nextposition[0]][nextposition[1]] > 0) {
        gameover = 1;
        return;
    }
    if (matrix[nextposition[0]][nextposition[1]] == -1) {
        eat();
    }
    move(nextposition[0], nextposition[1]);
}

void move(int x, int y) {
    matrix[x][y] = length;
}

void spawnFeed(void) {
    int spawnPosition[2];
    int success = 0;
    spawnPosition[0] = rand() % 8;
    spawnPosition[1] = rand() % 8;
    for (int i = 0; i < 64; i++) {
        if (matrix[(spawnPosition[0] + i) % 8][(spawnPosition[1] + (i / 8)) % 8] == 0) {
            success = 1;
            break;
        }
    }
    if (success != 1) {
        gameClear();
    }
    matrix[spawnPosition[0]][spawnPosition[1]] = -1;
}

void gameClear(void) {
}

void eat(void) {
    length++;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] > 0) {
                matrix[i][j]++;
            }
        }
    }
}

void render(void) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] != 0) {
                writeAnode(j, 1);
            } else {
                writeAnode(j, 0);
            }
        }
        writeCathode(i, 0);
        __delay_ms(10);
        writeCathode(i, 1);
    }
}

void timerInterruptHandler() {
    collisionCheck();
    if (gameover == 0) {
        update();
    }
}

void writeAnode(unsigned int pin, unsigned int status) {
    switch(pin) {
        case 0:
            ANODE_0_LAT = status;
            break;
        case 1:
            ANODE_1_LAT = status;
            break;
        case 2:
            ANODE_2_LAT = status;
            break;
        case 3:
            ANODE_3_LAT = status;
            break;
        case 4:
            ANODE_4_LAT = status;
            break;
        case 5:
            ANODE_5_LAT = status;
            break;
        case 6:
            ANODE_6_LAT = status;
            break;
        case 7:
            ANODE_7_LAT = status;
            break;
    }
}

void writeCathode(unsigned int pin, unsigned int status) {
    switch(pin) {
        case 0:
            CATHODE_0_LAT = status;
            break;
        case 1:
            CATHODE_1_LAT = status;
            break;
        case 2:
            CATHODE_2_LAT = status;
            break;
        case 3:
            CATHODE_3_LAT = status;
            break;
        case 4:
            CATHODE_4_LAT = status;
            break;
        case 5:
            CATHODE_5_LAT = status;
            break;
        case 6:
            CATHODE_6_LAT = status;
            break;
        case 7:
            CATHODE_7_LAT = status;
            break;
    }
}