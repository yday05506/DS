#include<stdio.h>
#define SIZE 11

int main(void)
{

	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '\0' };
	int index, i;
	char value;

	printf("������ġ : "); scanf_s("%d", &index); getchar(); //getchar�� ���� ���������� �뵵? �Ƹ���?
	printf("���Թ��� : "); scanf_s("%c", &value ,1); getchar();

	/*
	i = SIZE - 1;
	while (i > index) {
		a[i] = a[i - 1];
		i--;
	}

	*/

	for (i = SIZE - 1; i > index; i--)
	{
		a[i] = a[i - 1];
	}

	a[index] = value;
	a[SIZE-1] = '\0';
	printf("���԰�� : %s\n", a);


	return 0;

}