/*
 가변 인자 사용 예제.
 last modified 2021-09-14
*/
#include <stdio.h>

void add(int num, ...);		// 가변 인자 함수 선언!

int main(void) {
	int a = 10, b = 20, c = 30;

	add(1, a);
	add(2, a, b);
	add(3, a, b, c);

	return 0;
}

// 가변 인자 함수 정의.
void add(int num, ...) {	// num == 인자의 수를 저장하는 변수.
	int* p = NULL;
	p = &num + 1;		// num의 메모리 공간 이후부터
						// 함수 인자 전달에 따른 순서대로 메모리 공간이 연속적으로 생성됨.
						// -> num의 주소와 크기만 알면 모든 인자의 주소에 접근할 수 있다!!

	if (num == 1)
		printf("%d \n", p[0]);
	else if (num == 2)
		printf("%d \n", p[0] + p[1]);
	else
		printf("%d \n", p[0] + p[1] + p[2]);
}