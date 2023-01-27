#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int T, H, W, N = 0;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		if (N % H == 0) printf("%d%02d\n", H, N / H);
		else printf("%d%02d\n", N % H, N / H + 1);
	}
}





// 6 12 12 일 때 3으로 출력되는 오류! 

//int main() {
//	int T, H, W, N = 0;
//	int result[100];
//	scanf("%d", &T);
//	for (int i = 0; i < T; i++) {
//		scanf("%d %d %d", &H, &W, &N); 
//		result[i] = (N % H) * 100 + ((N / H) + 1);
//	}
//
//	for (int i = 0; i < T; i++) {
//		printf("%d\n", result[i]);
//	}
//	
//}