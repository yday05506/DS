#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char a[] = { 'P', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't', '.', '\0' };
	char b[5][10] = { {' ', ' ', ' ', ' ', 'A', '\0'}, {' ', ' ', ' ', 'A', 'B', 'C', '\0'}, {' ', ' ', 'A', 'B', 'C', 'D', 'E', '\0'}, {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0'}, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '\0'} };
	char temp = 0;
	int k = strlen(a);

	// 1�� ���
	printf("1. �迭 a : %s", a);

	printf("\n");
	printf("\n");

	// 2�� ���
	printf("2. a ���� : ");
	for (i = k - 1; i >= 0; i--) {
		printf("%c", a[i]);
	}

	printf("\n");
	printf("\n");

	// 3�� ���
	printf("3. �迭 b���� ������ ���� ����ϱ�\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (b[i][j] != ' ') {
				printf("%c", b[i][j]);
			}
		}
		printf("\n");
	}

	printf("\n");

	// 4�� ���
	printf("4. �迭 b�� �� ��° �ٸ� ����ϱ�\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (i = 4) {
				printf("\t%c\n", b[i][j]);
			}
		}
	}

	// 5�� ���
	printf("5. �迭 b�� �ð�������� 90�� ȸ���� ������� ����ϱ�\n");

	for (i = 0; i < 5; i++) {
		for (j = 9; j >= 0; j--) {
			printf("%c", b[j][i]);
		}
		printf("\n");
	}

	return 0;
}