#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - a C program that prints the first 98 Fibonacci numbers.
 * description: starting with 1 and 2.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / LARGEST;
	fib1_half2 = fib1 % LARGEST;
	fib2_half1 = fib2 / LARGEST;
	fib2_half2 = fib2 % LARGEST;
	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		if (half2 > 9999999999)
		{
			half1 += 1;
			half2 %= LARGEST;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");

	return (0);
}
