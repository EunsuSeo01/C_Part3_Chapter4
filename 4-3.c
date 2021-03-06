/*
 동적 메모리 할당 함수 malloc()과 해제 함수 free()의 사용 예제.
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	char* p1 = (char*)malloc(2);	// 힙 영역에 2바이트를 할당받고 할당된 메모리의 시작 주소를 p1에 저장.
	int* p2 = (int*)malloc(8);		// 힙 영역에 8바이트를 할당받고 할당된 메모리의 시작 주소를 p2에 저장.

	p1[0] = 'A';	// 첫 번째 1바이트 공간에 'A'를 저장.
	p1[1] = 'B';	// 두 번째 1바이트 공간에 'B'를 저장.

	p2[0] = 10;		// 첫 번째 4바이트 공간에 10을 저장.
	p2[1] = 20;		// 두 번째 4바이트 공간에 20을 저장.

	printf("주소 : %x %x %x %x \n", &p1[0], &p1[1], &p2[0], &p2[1]);
	printf("값 : %d %d %d %d \n", p1[0], p1[1], p2[0], p2[1]);

	free(p1);		// 동적 메모리 해제.
	p1 = NULL;		// 포인터 변수 초기화.

	free(p2);		// 동적 메모리 해제.
	p2 = NULL;		// 포인터 변수 초기화.

	return 0;
}