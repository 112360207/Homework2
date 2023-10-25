#include <stdio.h>

void print_hollow_rectangle(int length, int width) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			if (i == 0 || i == length - 1 || j == 0 || j == width - 1) {
				printf("+ ");
			}
			else {
				printf("  ");
			}
		}
		printf("\n");
	}
}

int main() {
	int length = 3;
	int width = 12;
	print_hollow_rectangle(length, width);
	return 0;
}