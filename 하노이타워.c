#include <stdio.h>

int main(void)
{
	int n = 4;	//원판 개수

	HanoiTower(n, 'A', 'B', 'C');	//A : 출발, B : 경유, C : 도착

	return 0;
}

//n : 원판 개수, a : 출발, b : 경유, c : 도착
void HanoiTower(int n, char a, char b, char c)
{
	if (n == 1)
	{
		//n : 원판 번호
		printf("원판 %d, %c -> %c\n", n, a, c);
	}
	else
	{
		HanoiTower(n - 1, a, c, b);
		//n : 원판 번호, a : 출발지, c : 도착지
		printf("원판 %d, %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}