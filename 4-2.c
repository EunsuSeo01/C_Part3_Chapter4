/*
 ���� �޸� �Ҵ� �Լ� malloc()�� ���� �Լ� free()�� ��� ����.
 last modified 2021-09-12
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int* p = NULL;
	p = (int*)malloc(4);	// �� ������ 4����Ʈ ���� �޸𸮸� �Ҵ����.

	if (p == NULL) {
		printf("�� ������ ���� �޸� �Ҵ� ���� \n");
		exit(0);
	}

	*p = 10;
	printf("�ּ� : %x \n", p);
	printf("�� : %d \n", *p);

	free(p);	// �ش� �ּҿ� �Ҵ�� �޸� ����.
	p = NULL;

	return 0;
}