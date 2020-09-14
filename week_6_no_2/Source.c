#include<stdio.h>

int main() {
	int score;
	scanf("%d", score);
	if (score < 0 || score>100) {
		printf("Please insert the number that is greater oe equal zero.");
	}
	else if (score <= 100 && score >= 80) {
		printf("A");
	}
	else if (score < 80 && score >= 70) {
		printf("B");
	}
	else if (score < 70 && score >= 60) {
		printf("C");
	}
	else if (score <= 60 && score >= 50) {
		printf("D");
	}
	else {
		printf("F");
	}
}