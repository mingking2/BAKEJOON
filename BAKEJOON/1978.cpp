#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 범위 축약

bool isPrime(int num) {	
	/* i*i :각 숫자들의 곱이 80이되는 쌍을 같은 색으로 표시했다. 
	1:80, 2:40, 4:20, 5:16, 8:10. √80의 값은 대략 8.xxx의 값이 나온다. 
	즉 약수들의 곱으로 봤을때 루트를 씌운 값이 중간값이 된다. 
	이 원리는 이용하여 2에서부터 √N의 값까지 검색을한다며 
	이후의 값은 확인할 필요가 없게 된고 시간복잡도는 O(√N)이 된다. 
	코드의 가독성을 위해 루트함수는 사용하지 않고 i의 제곱값으로 확인을한다.*/
	if (num < 2) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}


int main() {
	int N;
	int ch=0,num=0;
	scanf("%d", &N);

	
	for (int i = 0; i < N; i++) {
		scanf("%d", &ch);
		if (isPrime(ch)) num++;
	}
	
	printf("%d", num);
}