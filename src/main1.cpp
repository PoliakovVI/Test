#define _CRT_SECURE_NO_WARNINGS
#include  <stdio.h>
#include "task1.h"
int main() {
	int age, access;
	printf("\nEnter your age\n");
	scanf("%d", &age);
	access = ageCheck(age);
	if (access == 1) {
		printf("Access granted");
	}
	else {
		printf("Access denied");
	}
	return 0;
}