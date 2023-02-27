#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a C program that generates random valid passwords
 * for the program 101-crackme.
 * Return: 0 (For Success)
 **/
int main(void)
{
	int pass[100], i = 0, sum = 0, n;

	srand(time(NULL));

	for (; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
