/* 9.Calculate a person's body mass index (BMI). BMI is calculated by dividing the person's
weight, in kg, by the square of your height, in meters. */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float bmi, w, h; // BMI, weight, height.
	printf("\nHeight: ");
	scanf("%f", &h);
	printf("\nWeight: ");
	scanf("%f", &w);
	bmi = w / (h * h);
	printf("\nYour BMI is %.2f", bmi);
	if (bmi < 18.5) {
		printf("\nIts classification is thin and the level of obesity is 0, take care!");
	}
	else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("\nIts classification is normal and the level of obesity is 0, congratulations!");
	}
	else if (bmi >= 25.0 && bmi <= 29.9) {
		printf("\nIts classification is overweight and the level of obesity is 1, take care!");
	}
	else if (bmi >= 30.0 && bmi <= 39.9) {
		printf("\nIts classification is obesity and the level of obesity is 2, take care!");
	}
	else if (bmi >= 40.0) {
		printf("\nIts classification is severe obesity and the level of obesity is 3, take care!");
	}
	return 0;
}
