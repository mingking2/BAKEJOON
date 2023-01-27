#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int N;	
	scanf("%d", &N);


	int k = 0;
	int count = 0, sum = 0, min = 0;
	for (int i = 1; k < N; i++) {
		k += i;
		count++;
	}

	if (N == k) {
		k = 1;
		sum = count + 1;
		for (int j = 1; j < count; j++) {
			k++;
		}
		printf("%d/%d", k, sum - k);
	}
	else {
		min = k - N;
		k = 1;
		sum = count + 1;
		for (int j = 1; j < count - min; j++) {
			k++;
		}
		
		if (count % 2 == 0) {
			printf("%d/%d", k, sum - k);
		}
		else
			printf("%d/%d", sum - k, k);


	}
}





