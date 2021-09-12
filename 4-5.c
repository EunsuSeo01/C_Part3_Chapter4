/*
 동적 메모리 할당 함수 calloc()과 malloc()의 차이를 알 수 있는 예제.
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int* p1 = (int*)calloc(1, sizeof(int));		// 1 * sizeof(int)만큼 동적 메모리 할당.
	int* p2 = (int*)malloc(sizeof(int));		// sizeof(int)만큼 동적 메모리 할당.
												// 둘다 힙 영역에 4바이트 크기를 할당함.

	printf("p1 값 : %d \n", *p1);		// calloc()은 할당된 동적 메모리를 자동적으로 0으로 초기화해줌.
	printf("p2 값 : %d \n", *p2);		// malloc()은 그런 것 없음. 별도로 초기화가 필요.

	free(p1);
	p1 = NULL;

	free(p2);
	p2 = NULL;

	return 0;
}