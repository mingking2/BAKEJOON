//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//	int h, m, adm = 0;
//	scanf("%d %d", &h, &m);
//	scanf("%d", &adm);
//
//	int sum = m + adm;
//
//	if (sum / 60 >= 1) {
//		h += sum / 60;
//		if (h >= 24) h -= 24;
//		m = sum % 60;
//	}
//	else {
//		m += adm;
//	}
//
//	printf("%d %d", h, m);
//}

#include <stdio.h>

int main() {
    int h, m, t;
    scanf("%d %d %d", &h, &m, &t);

    h += t / 60;
    m += t % 60;

    if (m >= 60) {
        h += 1;
        m -= 60;
    }
    if (h >= 24) {
        h -= 24;
    }

    printf("%d %d", h, m);
    return 0;
}