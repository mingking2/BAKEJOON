#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//	int A, B, V = 0;
//	int start=0;
//	int count = 0;
//	scanf("%d %d %d", &A, &B, &V);
//
//	for (; start <= V;) {
//		count++;
//		start += A;
//		if (start == V) break;
//		start -= B;
//	}
//	
//	printf("%d", count);
//}

int main() {
	int A, B, V = 0;
	scanf("%d %d %d", &A, &B, &V);
	int count = (V - B) % (A - B);

	if (count == 0)	count = (V - B) / (A - B);
	else count = (V - B) / (A - B) + 1;

	printf("%d", count);
}