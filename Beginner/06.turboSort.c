#include "stdio.h"
#include "stdlib.h"

void sort(int *, int, int);

int main(void) {
	int i, size, x[1000000] = {0}, *tmp;

//	printf("\nEnter the size of the array: ");
	scanf("%d", &size);

//	printf("\nEnter %d elements: \n", size);
	for(i = 0; i < size; i ++) {
		scanf("%d", &x[i]);
	}

	sort(x, 0, size - 1);

//	printf("\nSorted elements: \n");
	for(i = 0; i < size; i ++) {printf("%d\n", x[i]);}
//	printf("\n");

	return 0;
}

void sort(int x[1000000], int first, int last) {
	int pivot, temp, i, j;
//	int a = 0, size = last + 1;
	if(first < last) {
		pivot = first;
		i = first;
		j = last;

		while(i < j) {
			while(x[i] <= x[pivot] && i < last) {i ++;}
			while(x[j] > x[pivot]) {j --;}
			if(i < j) {
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}

//			printf("\n");
//			for(a = 0; a < size; a ++) {
//				printf("%d ", x[a]);
//			}
		}

		temp = x[pivot];
		x[pivot] = x[j];
		x[j] = temp;

		sort(x, first, j - 1);
		sort(x, j + 1, last);
	}
}
