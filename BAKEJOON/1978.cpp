#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���� ���

bool isPrime(int num) {	
	/* i*i :�� ���ڵ��� ���� 80�̵Ǵ� ���� ���� ������ ǥ���ߴ�. 
	1:80, 2:40, 4:20, 5:16, 8:10. ��80�� ���� �뷫 8.xxx�� ���� ���´�. 
	�� ������� ������ ������ ��Ʈ�� ���� ���� �߰����� �ȴ�. 
	�� ������ �̿��Ͽ� 2�������� ��N�� ������ �˻����Ѵٸ� 
	������ ���� Ȯ���� �ʿ䰡 ���� �Ȱ� �ð����⵵�� O(��N)�� �ȴ�. 
	�ڵ��� �������� ���� ��Ʈ�Լ��� ������� �ʰ� i�� ���������� Ȯ�����Ѵ�.*/
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