/*
 ���� ���� ��� ����.
 last modified 2021-09-14
*/
#include <stdio.h>
#include <stdlib.h>

int* allocate(int num, ...);	// ���� ���� �Լ� ����.

int main(void) {
	int a = 4, b = 8;
	int* p1 = NULL;

	p1 = allocate(1, a);	// �Լ��� �ּҸ� ��ȯ�ϰ� int�� �������� p1�� ����.
	p1[0] = 10;
	printf("4����Ʈ �� ������ ����� �� : %d \n", p1[0]);

	free(p1);		// �޸� ����.
	p1 = NULL;		// ������ �� �ʱ�ȭ.

	return 0;
}

// ���� ���� �Լ� ����.
int* allocate(int num, ...) {
	int* p = &num + 1;		// num ������ ���� �Լ� ������ �����ͺ��� ����.
	static int* heap1 = NULL;		// ���� ������ ������ ����. �Լ��� ����Ǿ ������ �Ҹ���� �ʵ���.

	if (num == 1) {		// ���ڴ� 1���� �ޱ��.
		heap1 = (int*)malloc(p[0]);		// p[0]�� ����� �����ŭ ���� �Ҵ� �޾Ƽ� ���� �ּҸ� heap1�� ����.
		return heap1;		// �Ҵ���� ������ �ּҰ� ����� ���� heap1�� ��ȯ.
	}
	else {
		printf("������ ������ 1�� �����Դϴ�. \n");
		return NULL;
	}
}