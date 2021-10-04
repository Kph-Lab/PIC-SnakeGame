/*
 * File:   main.c
 * Author: potewo
 *
 * Created on 2021/09/29, 20:04
 */


#include <xc.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "main.h"
#include "mcc_generated_files/mcc.h"

int matrix[8][8] = {
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0}
};

//bool startMessage[][35] = {
//    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
//    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0}
//};

bool gameoverMessage[][52] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 1, 0}
};

int scrollIndex = 0;

int position[2] = {0, 0};
// x, y
int direction = 1;
// 0: up, 1: right, 2: down, 3: left
int length = 1;

int renderMode = 0;
// 0: playing, 1: gameover, 2: start

int checkSwitch0 = 0;
int checkSwitch1 = 0;

int switch0Flag = 0;
int switch1Flag = 0;

void main(void) {
    SYSTEM_Initialize();
    TMR0_SetInterruptHandler(timerInterruptHandler);
//    IOCBF0_SetInterruptHandler(rotateRight);
//    IOCBF1_SetInterruptHandler(rotateLeft);
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
    setup();
    spawnFeed();
    while(1) {
        checkSwitch();
        render();
    }
    return;
}

void setup(void) {
    srand(ADC_GetConversion(RANDOM_SEED));
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
            break;
    }
    if (nextposition[0] < 0 || nextposition[0] > 7 || nextposition[0] < 0 || nextposition[1] > 8) {
        renderMode = 1;
        return;
    }
    if (matrix[nextposition[1]][nextposition[0]] > 0) {
        renderMode = 1;
        return;
    }
    if (matrix[nextposition[1]][nextposition[0]] == -1) {
        eat();
    }
    move(nextposition[0], nextposition[1]);
}

void move(int x, int y) {
    position[0] = x;
    position[1] = y;
    matrix[y][x] = length + 1;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (matrix[i][j] > 0) {
                matrix[i][j]--;
            }
        }
    }
}

void spawnFeed(void) {
    int spawnPosition[2];
    int success = 0;
    spawnPosition[0] = rand() % 8;
    spawnPosition[1] = rand() % 8;
    for (int i = 0; i < 64; i++) {
        if (matrix[(spawnPosition[1] + i) % 8][(spawnPosition[0] + (i / 8)) % 8] == 0) {
            success = 1;
            break;
        }
    }
    if (success != 1) {
        gameClear();
        return;
    }
    matrix[spawnPosition[1]][spawnPosition[0]] = -1;
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
    spawnFeed();
}

void render(void) {
    if (renderMode == 0) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (matrix[j][i] != 0) {
                    writeAnode(j, 1);
                } else {
                    writeAnode(j, 0);
                }
            }
            writeCathode(i, 0);
            __delay_us(50);
            writeCathode(i, 1);
        }
//    } else if (renderMode == 2) {
//        for (int i = 0; i < 8; i++) {
//            for (int j = 0; j < 8; j++) {
//                if (startMessage[i+scrollIndex][j] != 0) {
//                    writeAnode(j, 1);
//                } else {
//                    writeAnode(j, 0);
//                }
//            }
//            writeCathode(i, 0);
//            __delay_us(50);
//            writeCathode(i, 1);
//        }
    } else if (renderMode == 1) {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (gameoverMessage[j][i+scrollIndex] != 0) {
                    writeAnode(j, 1);
                } else {
                    writeAnode(j, 0);
                }
            }
            writeCathode(i, 0);
            __delay_us(100);
            writeCathode(i, 1);
        }
    }
}

void timerInterruptHandler() {
    if (renderMode == 0) {
        collisionCheck();
    } else if (renderMode == 1) {
        scrollIndex++;
        if (scrollIndex > sizeof(gameoverMessage[0])) {
            scrollIndex = 0;
            renderMode = 0;
            reset();
        }
//    } else if (renderMode == 2) {
//        scrollIndex++;
//        if (scrollIndex > sizeof(startMessage[0]) - 8) {
//            scrollIndex = 0;
//            renderMode = 0;
//        }
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

void rotateRight() {
    direction++;
    direction %= 4;
}

void rotateLeft() {
    direction--;
    direction +=4;
    direction %= 4;
}

void reset() {
    position[0] = 0;
    position[1] = 0;
    direction = 1;
    length = 1;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            matrix[i][j] = 0;
        }
    }
    spawnFeed();
}

void checkSwitch() {
    if (SWITCH_1_GetValue() == 0) {
        checkSwitch0++;
        if (checkSwitch0 > 10 && switch0Flag == 0) {
            rotateRight();
            switch0Flag = 1;
        }
    } else if (SWITCH_2_GetValue() == 0) {
        checkSwitch1++;
        if (checkSwitch1 > 10 && switch1Flag == 0) {
            rotateLeft();
            switch1Flag = 1;
        }
    } else {
        if (checkSwitch0 > 0) {
            checkSwitch0--;
        }
        if (checkSwitch1 > 0) {
            checkSwitch1--;
        }
        if (checkSwitch0 == 0) {
            switch0Flag = 0;
        }
        if (checkSwitch1 == 0) {
            switch1Flag = 0;
        }
    }
}