/*
 ���� �޸� �Ҵ� �Լ� calloc() ��� ����.
 (malloc()�� ���� ����� ������ ������� �ణ �ٸ� ��!)
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 0;
	int* p = (int*)calloc(4, sizeof(int));		// sizeof(int) ũ��� 4�� = 4*4 = 16����Ʈ��ŭ �Ҵ�.

	if (p == NULL) {
		printf("�� ������ ���� �޸� �Ҵ� ���� \n");
		exit(0);
	}

	for (; i < 4; i++) {
		p[i] = i;
		printf("�ּ� : %x \n", &p[i]);
		printf("�� : %d \n", p[i]);
	}

	free(p);
	p = NULL;

	return 0;
}