#include <stdio.h>

int main()
{
	//tabulka pro malou nasobilku
	for (int j = 1; j <= 10; j++) {
		//bude 10 radku
		for (int i = 1; i <= 10; i++) {
			printf("%3d ", i * j);
		}
		printf("\n");
	}
	
}
