/*
 동적 메모리 할당 함수 malloc()과 해제 함수 free()의 사용 예제.
 last modified 2021-09-12
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int* p = NULL;
	p = (int*)malloc(4);	// 힙 영역에 4바이트 동적 메모리를 할당받음.

	if (p == NULL) {
		printf("힙 영역에 동적 메모리 할당 실패 \n");
		exit(0);
	}

	*p = 10;
	printf("주소 : %x \n", p);
	printf("값 : %d \n", *p);

	free(p);	// 해당 주소에 할당된 메모리 해제.
	p = NULL;

	return 0;
}