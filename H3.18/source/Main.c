#include <stdio.h>

int main() {
	double sales_amount;

	while (1) {
		printf("輸入以美元為單位的銷售額（-1 到結束）：");
		scanf_s("%lf", &sales_amount);

		if (sales_amount == -1) {
			break;
		}

		double commission = 200 + (0.09 * sales_amount);

		printf("薪資為：$%.2lf\n\n", commission);
	}

	return 0;
}