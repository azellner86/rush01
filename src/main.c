#include <unistd.h>

#define MAX_SIZE 36

//just for debugging, remove later
#include <stdio.h>

int valid_input_size(int size)
{
	// valid sizes are multile of 4's. 
	// starting at a 4x4 matrix
	
	// to small. min 4x4
	if (size < 16)
		return (0);

	// to big. max. 9x9
	if (size > 36)
		return(0);

	// no multiple of 4
	if (size % 4 != 0)
		return (0);

	return (size / 4);
}

int ft_atoi(char *str)
{
	int n;

	n = 0;
	while (*str != 0)
	{
		n = n * 10 + (n - '0');
	}
	return (n); 
}

int	main(int argc, char **argv)
{
	
	int setup[MAX_SIZE] = {0};
	int i;
	int size;
	
	size = valid_input_size(argc-1);
	if (!size)
	{
		write(1, "Error\n", 6);
	}
	while (*argv != 0)
	{
		i = 0;
		while(i < size)
		{
			printf("&s\n", **argv);
			setup[i] = ft_atoi(*argv);
			i++;
		}
		argv++;
	}

	return (0);
}
