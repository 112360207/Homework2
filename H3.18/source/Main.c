#include <stdio.h>

int main() {
	double sales_amount;

	while (1) {
		printf("��J�H��������쪺�P���B�]-1 �쵲���^�G");
		scanf_s("%lf", &sales_amount);

		if (sales_amount == -1) {
			break;
		}

		double commission = 200 + (0.09 * sales_amount);

		printf("�~�ꬰ�G$%.2lf\n\n", commission);
	}

	return 0;
}