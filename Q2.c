/*
 �������� 2�� Ǯ��.
 last modified 2021-09-15
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void allocate(int i);

void main() {
	int i;
	printf("�ʿ��� �޸� ���� : ");
	scanf("%d", &i);
	allocate(i);
}

void allocate(int size) {
	int* a = (int*)malloc(size);
	printf("%d�� ������ �Ҵ��Ͽ����ϴ�. \n", size);
}