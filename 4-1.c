/*
 각 변수들이 어떤 영역에 저장되어 있는지 확인해 보기 위한 예제.
 last modified 2021-09-12
*/
#include <stdio.h>

int a = 10;		// 전역변수 a 선언. -> 데이터 영역에 저장.

int main(void) {
	int num1 = 10, num2 = 20;		// 지역변수 num1, num2 선언. -> 스택 영역에 저장.
	static int s = 20;				// 정적변수 s 선언. -> 데이터 영역에 저장.

	printf("데이터 출력 : %d %d %d %d \n", a, num1, num2, s);
	printf("코드 영역 : %x %x \n", main, printf);		// 함수의 이름을 출력.
	printf("스택 영역 : %x %x \n", &num1, &num2);
	printf("데이터 영역 : %x %x \n", &a, &s);

	return 0;
}