/*
 ���� ���� ��� ����.
 last modified 2021-09-14
*/
#include <stdio.h>

void add(int num, ...);		// ���� ���� �Լ� ����!

int main(void) {
	int a = 10, b = 20, c = 30;

	add(1, a);
	add(2, a, b);
	add(3, a, b, c);

	return 0;
}

// ���� ���� �Լ� ����.
void add(int num, ...) {	// num == ������ ���� �����ϴ� ����.
	int* p = NULL;
	p = &num + 1;		// num�� �޸� ���� ���ĺ���
						// �Լ� ���� ���޿� ���� ������� �޸� ������ ���������� ������.
						// -> num�� �ּҿ� ũ�⸸ �˸� ��� ������ �ּҿ� ������ �� �ִ�!!

	if (num == 1)
		printf("%d \n", p[0]);
	else if (num == 2)
		printf("%d \n", p[0] + p[1]);
	else
		printf("%d \n", p[0] + p[1] + p[2]);
}