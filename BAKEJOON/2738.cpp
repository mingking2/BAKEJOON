#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[100][100];
	int B[100][100];
	int N, M = 0;
	int k = 0;
	scanf_s("%d %d", &N, &M);

	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%d", &A[i][j]);
		}
	}
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%d", &B[i][j]);
		}
	}


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}



}