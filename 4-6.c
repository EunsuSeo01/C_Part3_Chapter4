/*
 ���� �޸� �Ҵ� �Լ� realloc() ��� ����. (�޸� ������ Ȯ��)
 last modified 2021-09-13
*/
#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int i = 0;

	int* p = (int*)malloc(sizeof(int) * 2);		// �� ������ 8����Ʈ��ŭ ���� �޸𸮸� �Ҵ�.
	p[0] = 10;
	p[1] = 20;

	p = (int*)realloc(p, sizeof(int) * 4);		// �� �������� ������ 8����Ʈ�� 16����Ʈ�� ���Ҵ�!
												// -> �������� 8����Ʈ��ŭ �޸𸮰� Ȯ���.
	p[2] = 30;		// p[2], p[3]���� ��� ����.
	p[3] = 40;

	for (; i < 4; i++)
		printf("p[%d] : %d \n", i, p[i]);		// �޸𸮸� Ȯ���� �Ŷ� ������ �����͵鵵 �״�� ��������.

	free(p);	// �޸� ����.
	p = NULL;

	return 0;
}