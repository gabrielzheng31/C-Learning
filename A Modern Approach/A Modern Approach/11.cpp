#include <stdio.h>
float compute_GPA(char grades[], int n);

int main(void) {
	char grades[6] = { 'A','A','B','A','B','B'};

	printf("%0.2f", compute_GPA(grades, 6));
	}

float compute_GPA(char grades[], int n) {
	float sum = .0;

	for (int i = 0; i < 6; i++)
		switch (grades[i]) {
		case 'A':
			sum += 4;
			break;
		case 'B':
			sum += 3;
			break;
		case 'C':
			sum += 2;
			break;
		case 'D':
			sum += 1;
			break;
		case 'E':
			break;
		}
		
	return sum / 6.0;
}