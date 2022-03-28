#include <stdio.h>

int main(void)
{
	int n = 4;	//���� ����

	HanoiTower(n, 'A', 'B', 'C');	//A : ���, B : ����, C : ����

	return 0;
}

//n : ���� ����, a : ���, b : ����, c : ����
void HanoiTower(int n, char a, char b, char c)
{
	if (n == 1)
	{
		//n : ���� ��ȣ
		printf("���� %d, %c -> %c\n", n, a, c);
	}
	else
	{
		HanoiTower(n - 1, a, c, b);
		//n : ���� ��ȣ, a : �����, c : ������
		printf("���� %d, %c -> %c\n", n, a, c);
		HanoiTower(n - 1, b, a, c);
	}
}