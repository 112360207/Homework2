#include <stdio.h>

int main() {
	double principal, rate;
	int days;

	while (1) {
		printf("輸入貸款本金（-1 至結束）：");
		scanf_s("%lf", &principal);

		if (principal == -1) {
			break;
		}

		printf("輸入利率：");
		scanf_s("%lf", &rate);

		printf("輸入貸款期限（天數）：");
		scanf_s("%d", &days);

		double interest = (principal * rate * days) / 365;

		printf("利息費用為 %.2lf 美元\n\n", interest);
	}

	return 0;
}