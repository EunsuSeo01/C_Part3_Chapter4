/*
 연습문제 3번 풀이.
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

	printf("필요한 메모리 공간 : ");
	scanf("%d", &size);
	printf("저장 데이터 유형 (1)int, (2)char, (3)float : ");
	scanf("%d", &type);

	if (type == 1) {
		ip = (int*)calloc(size, sizeof(int));
		printf("메모리 시작 주소 : %d \n", ip);
		printf("할당된 전체 메모리 공간 : %d바이트 \n", size * sizeof(int));
	}
	else if (type == 2) {
		cp = (char*)calloc(size, sizeof(char));
		printf("메모리 시작 주소 : %d \n", cp);
		printf("할당된 전체 메모리 공간 : %d바이트 \n", size * sizeof(char));
	}
	else if (type == 3) {
		fp = (float*)calloc(size, sizeof(float));
		printf("메모리 시작 주소 : %d \n", fp);
		printf("할당된 전체 메모리 공간 : %d바이트 \n", size * sizeof(float));
	}

	return 0;
}