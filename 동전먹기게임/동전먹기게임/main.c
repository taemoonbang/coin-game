#include <stdio.h>
#include<stdlib.h>
#include "a.h"

int main(void)
{
	PLAYER* p = NULL;
	while (1) {
		menu();//0 0
		int select = 0;
		scanf("%d", &select);

		switch (select) {
		case1:
			system("cls");
			initPlayer(&p);//01
		}
		
	}
	return 0;
}

