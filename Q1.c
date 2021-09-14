/*
 연습문제 1번 코드.
 last modified 2021-09-15
*/
#include <stdio.h>

// 전역변수 선언. -> 데이터 영역에 저장.
char ch = 'c';
int in = 5;

int main() {
	int i = 3;		// 지역변수 선언. -> 스택 영역에 저장.
	func1(i, 5);
	return 0;
}

int func1(int i, int j) {	// 매개변수. -> 스택 영역에 저장.
	char c = 'a';
	func2(c);
}

int func2(char c) {
	int k = 3;
}