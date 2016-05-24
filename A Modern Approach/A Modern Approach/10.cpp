#include <stdio.h>
int max(int n, int a[]);
int ava(int n, int a[]);
int num(int n, int a[]);

int main(void) {
	int n;
	int a[]={};
	scanf("%d", &n);
	printf("%d", max(n, a));
}

int max(int n, int a[]) {
	for (int i = 0; i < n; i++)
		scanf("%d", a[i]);
	int max = a[0];
	for (int i = 1; i < n - 1; i++)
		if (max < a[i])
			max = a[i];
	return 0;
}