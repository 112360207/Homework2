#include <stdio.h>

int main() {
	int employee_code;
	double fixed_salary, hours_worked, hourly_rate, overtime_hours, commission_rate, total_sales, piece_rate, pieces_produced, weekly_earnings;
	do{
	printf("請輸入員工的工資代碼（1-4）: ");
	scanf_s("%d", &employee_code);

	switch (employee_code) {
	case 1:
		printf("請輸入經理的固定工資: ");
		scanf_s("%lf", &fixed_salary);
		weekly_earnings = fixed_salary;
		break;

	case 2:
		printf("請輸入小時工的工作小時數: ");
		scanf_s("%lf", &hours_worked);
		printf("請輸入小時工的小時工資率: ");
		scanf_s("%lf", &hourly_rate);

		if (hours_worked > 40) {
			overtime_hours = hours_worked - 40;
			weekly_earnings = (40 * hourly_rate) + (overtime_hours * 1.5 * hourly_rate);
		}
		else {
			weekly_earnings = hours_worked * hourly_rate;
		}
		break;

	case 3:
		printf("請輸入佣金工的總銷售額: ");
		scanf_s("%lf", &total_sales);
		commission_rate = 0.057;
		weekly_earnings = 250 + (total_sales * commission_rate);
		break;

	case 4:
		printf("請輸入計件工的生產數量: ");
		scanf_s("%lf", &pieces_produced);
		printf("請輸入每件產品的固定工資: ");
		scanf_s("%lf", &piece_rate);
		weekly_earnings = pieces_produced * piece_rate;
		break;

	default:
		printf("無效的工資代碼\n");
		return 1;
	}

	printf("員工的周工資為: %.2f 美元\n", weekly_earnings);
	} while (1);
	return 0;
}