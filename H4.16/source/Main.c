#include <stdio.h>

int main() {
	int i, j;

	
	printf("�Ĥ@�ت����T����:\n");
	for (i = 1; i <= 10; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	printf("\n�ĤG�ت����T����:\n");
	for (i = 10; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n�ĤT�ت����T����:\n");
	for (i = 10; i >= 1; i--) {
		for (j = 10; j > i; j--) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	printf("\n�ĥ|�ت����T����:\n");
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