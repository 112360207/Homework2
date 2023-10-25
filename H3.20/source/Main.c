#include <stdio.h>

int main() {
	int hours_worked;
	double hourly_rate;

	while (1) {
		printf("輸入工作時間（-1 到結束）：");
		scanf_s("%d", &hours_worked);

		if (hours_worked == -1) {
			break;
		}

		printf("輸入工人的小時費率 (500.00)：");
		scanf_s("%lf", &hourly_rate);

		double total_salary;

		if (hours_worked <= 40) {
			total_salary = hours_worked * hourly_rate;
		}
		else {
			total_salary = (40 * hourly_rate) + ((hours_worked - 40) * hourly_rate * 1.5);
		}

		printf("薪資為 $%.2lf\n\n", total_salary);
	}

	return 0;
}