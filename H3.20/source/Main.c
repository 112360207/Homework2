#include <stdio.h>

int main() {
	int hours_worked;
	double hourly_rate;

	while (1) {
		printf("��J�u�@�ɶ��]-1 �쵲���^�G");
		scanf_s("%d", &hours_worked);

		if (hours_worked == -1) {
			break;
		}

		printf("��J�u�H���p�ɶO�v (500.00)�G");
		scanf_s("%lf", &hourly_rate);

		double total_salary;

		if (hours_worked <= 40) {
			total_salary = hours_worked * hourly_rate;
		}
		else {
			total_salary = (40 * hourly_rate) + ((hours_worked - 40) * hourly_rate * 1.5);
		}

		printf("�~�ꬰ $%.2lf\n\n", total_salary);
	}

	return 0;
}