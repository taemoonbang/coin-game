#pragma once
struct Player {
	int x;
	int y;
	int coin;
}PLAYER;


typedef struct Coin {
	int x;
	int y;
	int value;
};

void menu(void);
void initPlayer(PLAYER** pp);