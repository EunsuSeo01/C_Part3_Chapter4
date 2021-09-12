/*
 ���� �޸� �Ҵ� �Լ� calloc()�� malloc()�� ���̸� �� �� �ִ� ����.
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int* p1 = (int*)calloc(1, sizeof(int));		// 1 * sizeof(int)��ŭ ���� �޸� �Ҵ�.
	int* p2 = (int*)malloc(sizeof(int));		// sizeof(int)��ŭ ���� �޸� �Ҵ�.
												// �Ѵ� �� ������ 4����Ʈ ũ�⸦ �Ҵ���.

	printf("p1 �� : %d \n", *p1);		// calloc()�� �Ҵ�� ���� �޸𸮸� �ڵ������� 0���� �ʱ�ȭ����.
	printf("p2 �� : %d \n", *p2);		// malloc()�� �׷� �� ����. ������ �ʱ�ȭ�� �ʿ�.

	free(p1);
	p1 = NULL;

	free(p2);
	p2 = NULL;

	return 0;
}