/*
 가변 인자 사용 예제.
 last modified 2021-09-14
*/
#include <stdio.h>
#include <stdlib.h>

int* allocate(int num, ...);	// 가변 인자 함수 선언.

int main(void) {
	int a = 4, b = 8;
	int* p1 = NULL;

	p1 = allocate(1, a);	// 함수가 주소를 반환하고 int형 포인터인 p1이 받음.
	p1[0] = 10;
	printf("4바이트 힙 영역에 저장된 값 : %d \n", p1[0]);

	free(p1);		// 메모리 해제.
	p1 = NULL;		// 포인터 값 초기화.

	return 0;
}

// 가변 인자 함수 정의.
int* allocate(int num, ...) {
	int* p = &num + 1;		// num 이후의 실제 함수 인자의 데이터부터 참조.
	static int* heap1 = NULL;		// 정적 포인터 변수를 선언. 함수가 종료되어도 공간이 소멸되지 않도록.

	if (num == 1) {		// 인자는 1개만 받기로.
		heap1 = (int*)malloc(p[0]);		// p[0]에 저장된 사이즈만큼 동적 할당 받아서 시작 주소를 heap1에 저장.
		return heap1;		// 할당받은 공간의 주소가 저장된 변수 heap1을 반환.
	}
	else {
		printf("인자의 개수는 1개 이하입니다. \n");
		return NULL;
	}
}