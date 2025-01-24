#include <unistd.h>

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

	return (1);
}

int	main(int argc, char **argv)
{
	
	if (!valid_input_size(argc-1))
	{
		write(1, "Error\n", 6);
	}

	return (0);
}
