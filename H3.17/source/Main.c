#include <stdio.h>

int main() {
	int account_number;
	double beginning_balance, total_charges, total_credits, credit_limit;

	while (1) {
		printf("輸入帳號（-1結束）：");
		scanf_s("%d", &account_number);

		if (account_number == -1) {
			break;
		}

		printf("輸入期初餘額：");
		scanf_s("%lf", &beginning_balance);
		printf("輸入總費用：");
		scanf_s("%lf", &total_charges);
		printf("輸入總學分：");
		scanf_s("%lf", &total_credits);
		printf("輸入信用額度：");
		scanf("%lf", &credit_limit);

		double new_balance = beginning_balance + total_charges - total_credits;

		printf("\n帳戶：%d\n", account_number);
		printf("信用額度：%.2lf\n", credit_limit);
		printf("餘額：%.2lf\n", new_balance);

		if (new_balance > credit_limit) {
			printf("超過信用限額。\n");
		}

		printf("\n");
	}

	return 0;
}