#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j;
	char a[] = { 'P', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't', '.', '\0' };
	char b[5][10] = { {' ', ' ', ' ', ' ', 'A', '\0'}, {' ', ' ', ' ', 'A', 'B', 'C', '\0'}, {' ', ' ', 'A', 'B', 'C', 'D', 'E', '\0'}, {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0'}, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '\0'} };
	char temp = 0;
	int k = strlen(a);

	// 1번 출력
	printf("1. 배열 a : %s", a);

	printf("\n");
	printf("\n");

	// 2번 출력
	printf("2. a 역순 : ");
	for (i = k - 1; i >= 0; i--) {
		printf("%c", a[i]);
	}

	printf("\n");
	printf("\n");

	// 3번 출력
	printf("3. 배열 b에서 공백은 빼고 출력하기\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (b[i][j] != ' ') {
				printf("%c", b[i][j]);
			}
		}
		printf("\n");
	}

	printf("\n");

	// 4번 출력
	printf("4. 배열 b를 네 번째 줄만 출력하기\n");
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 10; j++) {
			if (i = 4) {
				printf("\t%c\n", b[i][j]);
			}
		}
	}

	// 5번 출력
	printf("5. 배열 b를 시계방향으로 90도 회전한 모양으로 출력하기\n");

	for (i = 0; i < 5; i++) {
		for (j = 9; j >= 0; j--) {
			printf("%c", b[j][i]);
		}
		printf("\n");
	}

	return 0;
}