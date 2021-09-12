/*
 동적 메모리 할당 함수 realloc() 사용 예제. (메모리 사이즈 축소)
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 0;

	int* p = (int*)malloc(sizeof(int) * 2);		// 8바이트 동적 메모리 할당.
	p[0] = 10;
	p[1] = 20;

	p = (int*)realloc(p, sizeof(int) * 1);		// p가 가리키는 영역을 4바이트로 재할당.
												// -> 이전보다 4바이트만큼 축소됨.
	p[0] = 30;		// p[0]의 값 변경.

	for (; i < 2; i++)
		printf("p[%d] : %d \n", i, p[i]);		// 메모리가 축소되었기 때문에 p[1]은 사용할 수 없게 됨.

	free(p);	// 메모리 해제.
	p = NULL;

	return 0;
}