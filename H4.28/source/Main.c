#include <stdio.h>

int main() {
	int employee_code;
	double fixed_salary, hours_worked, hourly_rate, overtime_hours, commission_rate, total_sales, piece_rate, pieces_produced, weekly_earnings;
	do{
	printf("�п�J���u���u��N�X�]1-4�^: ");
	scanf_s("%d", &employee_code);

	switch (employee_code) {
	case 1:
		printf("�п�J�g�z���T�w�u��: ");
		scanf_s("%lf", &fixed_salary);
		weekly_earnings = fixed_salary;
		break;

	case 2:
		printf("�п�J�p�ɤu���u�@�p�ɼ�: ");
		scanf_s("%lf", &hours_worked);
		printf("�п�J�p�ɤu���p�ɤu��v: ");
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
		printf("�п�J�����u���`�P���B: ");
		scanf_s("%lf", &total_sales);
		commission_rate = 0.057;
		weekly_earnings = 250 + (total_sales * commission_rate);
		break;

	case 4:
		printf("�п�J�p��u���Ͳ��ƶq: ");
		scanf_s("%lf", &pieces_produced);
		printf("�п�J�C�󲣫~���T�w�u��: ");
		scanf_s("%lf", &piece_rate);
		weekly_earnings = pieces_produced * piece_rate;
		break;

	default:
		printf("�L�Ī��u��N�X\n");
		return 1;
	}

	printf("���u���P�u�ꬰ: %.2f ����\n", weekly_earnings);
	} while (1);
	return 0;
}