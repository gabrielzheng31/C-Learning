//#include <stdio.h>
//#define SIZE 10
//int largest_element(int n, int a[]);
//int average_of_elements(int n, int a[]);
//int positive_count(int n, int a[]);
//
//int main(void) {
//	int n, a[] = { 1,2,3,4,5,6,7,8,9,0 };
//
//	printf("%d ", largest_element(SIZE, a));
//	printf("%d ", average_of_elements(SIZE, a));
//	printf("%d ", positive_count(SIZE, a));
//	putchar('\n');
//}
//
//int largest_element(int n, int a[]) {
//	int maximum = a[0];
//
//	for (int i = 1; i < n; i++)
//		if (maximum < a[i])
//			maximum = a[i];
//
//	return maximum;
//}
//
//int average_of_elements(int n, int a[]) {
//	float sum = 0;
//
//	for (int i = 0; i < SIZE; i++)
//		sum += a[i];
//
//	return sum / SIZE;
//}
//
//int positive_count(int n, int a[]) {
//	int i, count = 0;
//
//	for (i = 0; i < SIZE; i++)
//		if (a[i] > 0)
//			count++;
//
//	return count;
//}