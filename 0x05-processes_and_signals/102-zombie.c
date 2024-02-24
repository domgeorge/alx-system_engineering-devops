#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

/**
 * infinite_while - function making an infinite loop
 * Return: 0
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - program creates 5 zombie processes
 * Return: 0
 */
int main(void)
{
	int i;
	pid_t j;

	for (i = 0; i < 5; i++)
	{
		j = fork();
		if (!j)
			return (0);
		printf("Zombie process created, PID: %d\n", j);
	}

	infinite_while();
	return (0);
}
