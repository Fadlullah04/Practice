#include<stdio.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid;
	pid = getpid();
	
	/*printf("The argument is the %cth, and the argument is %s\n", argc, argv[argc]);*/
	printf("Process ID: %d\n", pid);
	return (0);
}
