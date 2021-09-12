/*
 동적 메모리 할당 함수 calloc() 사용 예제.
 (malloc()과 같은 기능을 하지만 사용방법만 약간 다른 것!)
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 0;
	int* p = (int*)calloc(4, sizeof(int));		// sizeof(int) 크기로 4개 = 4*4 = 16바이트만큼 할당.

	if (p == NULL) {
		printf("힙 영역에 동적 메모리 할당 실패 \n");
		exit(0);
	}

	for (; i < 4; i++) {
		p[i] = i;
		printf("주소 : %x \n", &p[i]);
		printf("값 : %d \n", p[i]);
	}

	free(p);
	p = NULL;

	return 0;
}