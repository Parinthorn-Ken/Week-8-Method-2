#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main() {

	int x;
	printf("Enter the number : ");
	scanf("%d", &x);
	int y;
	y=x / 2;
	y = y * 2;
	if (x == y) {
		printf("Even number");
	}
	else printf("Odd number");




	return 0;
}