#include <stdio.h>

int main() {
	int account_number;
	double beginning_balance, total_charges, total_credits, credit_limit;

	while (1) {
		printf("��J�b���]-1�����^�G");
		scanf_s("%d", &account_number);

		if (account_number == -1) {
			break;
		}

		printf("��J����l�B�G");
		scanf_s("%lf", &beginning_balance);
		printf("��J�`�O�ΡG");
		scanf_s("%lf", &total_charges);
		printf("��J�`�Ǥ��G");
		scanf_s("%lf", &total_credits);
		printf("��J�H���B�סG");
		scanf("%lf", &credit_limit);

		double new_balance = beginning_balance + total_charges - total_credits;

		printf("\n�b��G%d\n", account_number);
		printf("�H���B�סG%.2lf\n", credit_limit);
		printf("�l�B�G%.2lf\n", new_balance);

		if (new_balance > credit_limit) {
			printf("�W�L�H�έ��B�C\n");
		}

		printf("\n");
	}

	return 0;
}