#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	double a[3][3];
	int  i, j, b;
	double sum1 = 0, sum2 = 0, pre = 0, recall = 0, flag = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%lf", &a[i][j]);
		}
	}
	scanf("%d", &b);
	if (b == 0) {
		flag = a[0][0];
		for (i = 0; i < 3; i++) {
			sum1 += a[0][i];
			sum2 += a[i][0];
		}
	}
	if (b == 1) {
		flag = a[1][1];
		for (i = 0; i < 3; i++) {
			sum1 += a[1][i];
			sum2 += a[i][1];
		}
	}
	if (b == 2) {
		flag = a[2][2];
		for (i = 0; i < 3; i++) {
			sum1 += a[2][i];
			sum2 += a[i][2];
		}
	}
	pre = flag / sum1;
	recall = flag / sum2;
	printf("pre=%lf\n", pre);
	printf("recall=%lf\n", recall);
	double f1 = 2*(pre*recall)/(pre+recall);
	printf("F1=%lf\n",f1);
}
