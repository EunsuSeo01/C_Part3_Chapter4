/*
 연습문제 2번 풀이.
 last modified 2021-09-15
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void allocate(int i);

void main() {
	int i;
	printf("필요한 메모리 공간 : ");
	scanf("%d", &i);
	allocate(i);
}

void allocate(int size) {
	int* a = (int*)malloc(size);
	printf("%d의 공간을 할당하였습니다. \n", size);
}