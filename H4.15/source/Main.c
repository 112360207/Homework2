#include <stdio.h>

int main() {
	 double initial_investment = 5000.0;
	 int num_years = 15;
	 double principal = initial_investment;

	
	double interest_rates[] = { 10.0, 10.5, 11.0, 11.5, 12.0 };

	for (int i = 0; i < 5; i++) {
		double rate = interest_rates[i] / 100; 

		
		for (int year = 1; year <= num_years; year++) {
			principal = principal * (1 + rate);
		}

		
		printf("At %.1f%% interest rate, the investment will grow to %.2f USD.\n", interest_rates[i], principal);

	
		principal = initial_investment;
	}

	return 0;
}