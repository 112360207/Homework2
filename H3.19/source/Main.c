#include <stdio.h>

int main() {
	double principal, rate;
	int days;

	while (1) {
		printf("��J�U�ڥ����]-1 �ܵ����^�G");
		scanf_s("%lf", &principal);

		if (principal == -1) {
			break;
		}

		printf("��J�Q�v�G");
		scanf_s("%lf", &rate);

		printf("��J�U�ڴ����]�Ѽơ^�G");
		scanf_s("%d", &days);

		double interest = (principal * rate * days) / 365;

		printf("�Q���O�ά� %.2lf ����\n\n", interest);
	}

	return 0;
}