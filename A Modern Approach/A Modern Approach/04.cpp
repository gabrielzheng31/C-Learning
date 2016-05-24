//#include <stdio.h>
//int day_of_year(int month, int day, int years);
//
//int main(void) {
//	int day, month, years;
//	scanf("%d %d %d", &month, &day, &years);
//	printf("%d\n", day_of_year(month, day, years));
//}
//
//int day_of_year(int month, int day, int years) {
//	int month1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int month2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
//	int sum = 0;
//	if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0)) {
//		for (int i = 0; i < month - 1; i++)
//			sum += month2[i];
//		sum += day;
//		return sum;
//	}
//	else {
//		for (int i = 0; i < month - 1; i++)
//			sum += month1[i];
//		sum += day;
//		return sum;
//	}
//}