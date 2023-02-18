#include<stdio.h>
#include<unistd.h>

int main(void)
{
	pid_t ppid;
	ppid = getppid();

	printf("Parent process ID: %d\n", ppid);
	return (0);
}
