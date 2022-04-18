#include <stdio.h>

int main(void)
{
	int i, j;
	char a[] = { 'P', 'r', 'a', 'c', 't', 'i', 'c', 'e', ' ', 'm', 'a', 'k', 'e', 's', ' ', 'p', 'e', 'r', 'f', 'e', 'c', 't', '.', '\0' };
	char b[5][10] = { {' ', ' ', ' ', ' ', 'A', '\0'}, {' ', ' ', ' ', 'A', 'B', 'C', '\0'}, {' ', ' ', 'A', 'B', 'C', 'D', 'E', '\0'}, {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0'}, {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', '\0'} };

	// 1번 출력
	printf("1. 배열 a : %s", a);

	printf("\n");

	// 2번 출력
//	printf("2. a 역순 : ");
//	for (i = 23; i > 0; i--) {
//		getchar();
//		printf("%s\n", a);
//	}

	printf("\n");

	// 3번 출력
//	printf("3. 배열 b에서 공백은 빼고 출력하기\n");
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 10; j++) {
//			printf("%s", b[i][j]);
//		}
//		printf("\n");
//	}

	// 5번 출력
	printf("5. 배열 b를 시계방향으로 90도 회전한 모양으로 출력하기");
	for (i = 0; i < 10; i++) {
		for (j = 5; j > 0; j--) {
			printf("%s", b);
		}
		printf("\n");
	}
	return 0;
}