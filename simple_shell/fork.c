#include<stdio.h>
#include<unistd.h>

int main(void)
{
	pid_t pid;
	pid = getpid();
	
	printf("Process ID before fork: %d\n", pid);

	fork();

	if (pid == -1)
	{
		perror("Unsuccessful\n");
		return 1;
	}

	printf("After fork: %d\n", pid);
	return (0);
}









































		
