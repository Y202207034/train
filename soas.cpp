#include <iostream>

int main()
{
	int a;
	printf("전철이 온다 오른쪽(4)과 왼쪽(1) 선로에 사람들이 있다\n짝홀로 결정 짝은 4명 , 홀은 1명 쪽으로 기차가 지나간다.\n입력:");
	
	
		scanf_s("%d", &a);;



		 if (0 == a % 2)
		{
			printf("사람 4명이 선로에 치였다.....");
		}

		else if (0 == a % 3) {
			printf("사람 1명이 선로에 치였다...");
		}

}