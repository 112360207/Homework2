#include <stdio.h>

int main() {
	int i, j;

	
	printf("第一種直角三角形:\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n第二種直角三角形:\n");
	for (i = 10; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n第三種直角三角形:\n");
	for (i = 10; i >= 1; i--) {
		for (j = 10; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n第四種直角三角形:\n");
	for (i = 1; i <= 10; i++) {
		for (j = 10; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}