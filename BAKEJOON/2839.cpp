#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N = 0, num=0, num1 = 0, num2 = 0;
	scanf("%d", &N);

	num = N / 5;
	while (1) {
		if (num == -1) {
			break;
		}
		num1 = N - num * 5;
		if (num1 % 3 == 0) {
			num2 = num1 / 3;
			break;
		}
		else num--;
	}

	if (num == -1)	printf("-1");
	else printf("%d", num + num2);
	
}

/*for (int i = N; i>=0 ; i--) {
		num = 5 * i;
		if (N > num) {
			if ((N - num) % 3 == 0) {
				num1 = num / 5;
				num2 = (N - num) / 3;
				printf("%d", num1 + num2);
				return 0;
			}
		}
	}
	printf("-1");*/