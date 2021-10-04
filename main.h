/* 
 * File:   main.h
 * Author: potewo
 *
 * Created on 2021/09/29, 22:42
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

int* anodes[8];
int* cathodes[8];

void writeAnode(unsigned int pin, unsigned int status);
void writeCathode(unsigned int pin, unsigned int status);
void main(void);
void setup(void);
void collisionCheck(void);
void move(int x, int y);
void spawnFeed(void);
void gameClear(void);
void eat(void);
void render(void);
void timerInterruptHandler(void);
void rotateRight(void);
void rotateLeft(void);
void reset(void);
void checkSwitch(void);