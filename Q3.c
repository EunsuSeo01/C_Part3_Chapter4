/*
 �������� 3�� Ǯ��.
 last modified 2021-09-15
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int size, type;
	int* ip = NULL;
	char* cp = NULL;
	float* fp = NULL;

	printf("�ʿ��� �޸� ���� : ");
	scanf("%d", &size);
	printf("���� ������ ���� (1)int, (2)char, (3)float : ");
	scanf("%d", &type);

	if (type == 1) {
		ip = (int*)calloc(size, sizeof(int));
		printf("�޸� ���� �ּ� : %d \n", ip);
		printf("�Ҵ�� ��ü �޸� ���� : %d����Ʈ \n", size * sizeof(int));
	}
	else if (type == 2) {
		cp = (char*)calloc(size, sizeof(char));
		printf("�޸� ���� �ּ� : %d \n", cp);
		printf("�Ҵ�� ��ü �޸� ���� : %d����Ʈ \n", size * sizeof(char));
	}
	else if (type == 3) {
		fp = (float*)calloc(size, sizeof(float));
		printf("�޸� ���� �ּ� : %d \n", fp);
		printf("�Ҵ�� ��ü �޸� ���� : %d����Ʈ \n", size * sizeof(float));
	}

	return 0;
}