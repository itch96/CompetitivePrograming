// Small factorials.
#include "stdio.h"

#define MAX 500000

void accept(void);
void fact(int);
int multiply(int, int *, int);

void accept(void){
	int t = 0, i = 0, x = 0;
	
	scanf("%d", &t);

	for(i = 0; i < t; i ++){
		scanf("%d", &x);
		fact(x);
	}
}

void fact(int n)
{
    int res[MAX];
 
    // Initialize result
    res[0] = 1;
    int res_size = 1, x = 0, i = 0;
 
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
    for (x = 2; x <= n; x ++)
        res_size = multiply(x, res, res_size);
 
//  printf("Factorial of given number is \n");
    for (i = res_size - 1; i >= 0; i --)
        printf("%d", res[i]);

    printf("\n");
}
 
// This function multiplies x with the number represented by res[].
// res_size is size of res[] or number of digits in the number represented
// by res[]. This function uses simple school mathematics for multiplication.
// This function may value of res_size and returns the new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0;  // Initialize carry
    int i = 0;
 
    // One by one multiply n with individual digits of res[]
    for (i = 0; i < res_size; i ++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  // Store last digit of 'prod' in res[]
        carry  = prod / 10;    // Put rest in carry
    }
 
    // Put carry in res and increase result size
    while (carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}

int main(void){
	accept();
	return 0;
}
