/*
 동적 메모리 할당 함수 realloc() 사용 예제. (메모리 사이즈 확장)
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 0;

	int* p = (int*)malloc(sizeof(int) * 2);		// 힙 영역에 8바이트만큼 동적 메모리를 할당.
	p[0] = 10;
	p[1] = 20;

	p = (int*)realloc(p, sizeof(int) * 4);		// 그 영역에서 기존의 8바이트를 16바이트로 재할당!
												// -> 이전보다 8바이트만큼 메모리가 확장됨.
	p[2] = 30;		// p[2], p[3]까지 사용 가능.
	p[3] = 40;

	for (; i < 4; i++)
		printf("p[%d] : %d \n", i, p[i]);		// 메모리를 확장한 거라서 이전의 데이터들도 그대로 남아있음.

	free(p);	// 메모리 해제.
	p = NULL;

	return 0;
}