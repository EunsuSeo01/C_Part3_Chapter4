/*
 �������� 1�� �ڵ�.
 last modified 2021-09-15
*/
#include <stdio.h>

// �������� ����. -> ������ ������ ����.
char ch = 'c';
int in = 5;

int main() {
	int i = 3;		// �������� ����. -> ���� ������ ����.
	func1(i, 5);
	return 0;
}

int func1(int i, int j) {	// �Ű�����. -> ���� ������ ����.
	char c = 'a';
	func2(c);
}

int func2(char c) {
	int k = 3;
}