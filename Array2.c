#include <stdio.h>
#define SIZE 11

int main(void)
{
	char a[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '\0' };
	int index, i;

	printf("���� ��ġ : ");
	scanf_s("%d", &index);

	for (i = index; i < SIZE - 1; i++) {
		a[i] = a[i + 1];
	}

	printf("���� ��� : %s \n", a);

	return 0;
}